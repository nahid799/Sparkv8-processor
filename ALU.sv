
module ALU (val,op,op3,operand1,operand2,clk,req,reqack,busy,done,N,Z,V,C,Y,tag_overflow,trap);

  input [1:0]      op;

  input [5:0]      op3;

  input [31:0]     operand1;

  input [31:0]        operand2;



  input clk;



  input req;        

  output reqack;

  output busy;

  output done; 

    

  output [31:0] Y;

  output [31:0] val;

  output  tag_overflow;

  output  trap;

  output  N,Z,V,C;

      



  

  logic [4:0] shcnt;

   logic [63:0] temp_64; 

  logic temp;

  logic [31:0] pivot;

  logic [63:0] product;



  

 enum {idle,busy_state} ALU_state;  



  

  always @ (posedge clk) begin  

    

    if (ALU_state == idle) begin

        
	Y = 0;
        busy <= 0;

        reqack <= 0;

        val <= 0;

        done <= 0;

    

        if (req && !busy) begin

            //$display("[ALU] request for %b", op);

            reqack <= 1;

            ALU_state <= busy_state ;

            busy <= 1;

        end



    end else if (ALU_state == busy_state) begin

        if (op == 2'b10) begin

            if (op3 == 6'b111000) begin

            /* for JMPL instruction */

                val <= operand1 + operand2;

            end else begin     

            /* for normal ALU op */    

                val <= result();

            end

    //    end else if (op==2'b11)  begin

            /* for load/store */

     //       val <= operand1 + operand2;

        end else if (op==0 && op3[5:3]== 3'b100) begin

            /* for sethi */

 //           $display("[ALU] sethi val %x" , val);    

            val <= operand1;

        end

            

        ALU_state <= idle;

        done <= 1;

                        

    end

    

  end

  

  

  function logic[31:0] result();

    case (op3)

      6'b000001:result = Logical();

      6'b010001:result = Logical();

      6'b000101:result = Logical();

      6'b010001:result = Logical();

      6'b000010:result = Logical();

      6'b010010:result = Logical();

      6'b000110:result = Logical();

      6'b010110:result = Logical();

      6'b000011:result = Logical();

      6'b010011:result = Logical();

      6'b000111:result = Logical();

      6'b010111:result = Logical();

      6'b100101:result = Shift();

      6'b100110:result = Shift();

      6'b100111:result = Shift();

      6'b000000:result = Add();

      6'b010000:result = Add();

      6'b001000:result = Add();

      6'b011000:result = Add();

      6'b100000:result = TagADD();

      6'b100010:result = TagADD();

      6'b000100:result = Subtract();

      6'b010100:result = Subtract();

      6'b001100:result = Subtract();

      6'b011100:result = Subtract();

      6'b100001:result = TagSUB();

      6'b100011:result = TagSUB();

      6'b100100:result = MultS();

      6'b001010:result = Multiply();

      6'b001011:result = Multiply();

      6'b011010:result = Multiply();

      6'b011011:result = Multiply();				     

     

      6'b001110:result = Divide();

      6'b001111:result = Divide();

      6'b011110:result = Divide();

      6'b011111:result = Divide();

      6'b110000:Y= (operand1^operand2);

     

      

      

      

      

      default:

        $display("Instruction Doesn't exist ");

    endcase

    

  endfunction

  

  

  

  function logic[31:0] Logical();

    case (op3)

      6'b000001:Logical = operand1 & operand2;

      6'b010001:Logical = operand1 & operand2;

      6'b000101:Logical = ~(operand1 & operand2);

      6'b010001:Logical = ~(operand1 & operand2);

      6'b000010:Logical = operand1 | operand2;

      6'b010010:Logical = operand1 | operand2;

      6'b000110:Logical = ~(operand1 | operand2);

      6'b010110:Logical = ~(operand1 | operand2);

      6'b000011:Logical = operand1 ^ operand2;

      6'b010011:Logical = operand1 ^ operand2;

      6'b000111:Logical = ~(operand1 ^ operand2);

      6'b010111:Logical = ~(operand1 ^ operand2);

      

      default:

        $display("No such Instruction");

    endcase

      

      

    if(op3== 6'b010001 || op3== 6'b010001 ||op3== 6'b010010 ||op3== 6'b010110 ||op3== 6'b010011 ||op3== 6'b010111) 

      begin

        N=Logical[31];

        

        if(Logical==0) begin Z=1; end 

        else begin Z=0; end

        

        V=0;

        C=0;

         

    end



  endfunction



  

  function logic[31:0] Shift();

   

    shcnt=operand2[4:0];

    temp=operand1[31];  

      

    case(op3)

    6'b100101:Shift = operand1<<shcnt;

    6'b100110:Shift = operand1>>shcnt;

    6'b100111:Shift = operand1>>shcnt;

      

    default:

      $display("No such instruction");

    endcase 

    

    if(op3==6'b100111 && operand1[31]==1) begin

      pivot=0;

      pivot=~pivot;

      $display("pivot is: %b",pivot);

      pivot=pivot<<(32-shcnt);

      $display("pivot becomes: %b",pivot);

      Shift=Shift | pivot;

    end

    

    

  endfunction

  

  function logic[31:0] Add();

    if(op3==6'b000000 || op3==6'b010000) begin

      Add=operand1+operand2;

      end

    else begin

      Add=operand1+operand2+C;

    end

      

    if(op3==6'b010000 || op3==6'b011000) begin

      N=Add[31];

      if(Add==0) begin Z=1; end 

      else begin Z=0; end

      V=((operand1[31] && operand2[31] && !(Add[31])) || (!(operand1[31]) && !(operand2[31]) && Add[31])) ;

      C=((operand1[31] && operand2[31]) || ((!Add[31]) && (operand1[31] || operand2[31])));

    end

  endfunction

  

  function logic[31:0] TagADD();

    TagADD=operand1+operand2;

    temp = (operand1[31] & operand2[31] & (!TagADD[31])) || (!(operand1[31]) & (!operand2[31]) & TagADD[31]) || (operand1[1:0]!=2'b00 || operand2[1:0]!=0);

    if((op3==6'b100010) && (temp==1)) begin

      trap=1;

      tag_overflow=1; 

    end

    else begin

      N=TagADD[31];

      Z= !(TagADD==0);

      V= temp;

      C= ((operand1[31] && operand2[31]) || ((!TagADD[31]) && (operand1[31] || operand2[31])));

    end

  endfunction

  

  function logic[31:0] Subtract();

    

    if(op3==6'b000100 || op3==6'b010100) begin

      Subtract=operand1-operand2;

      end

    else begin

      Subtract=operand1-operand2-C;

    end

      

    if(op3==6'b010100 || op3==6'b011100) begin

      N=Subtract[31];

      if(Subtract==0) begin Z=1; end 

      else begin Z=0; end

      V=((operand1[31] && (!operand2[31]) && (!Subtract[31])) || ((!operand1[31]) && operand2[31] && Subtract[31])) ;

      C=((!operand1[31] && operand2[31]) || (Subtract[31] && (!operand1[31] || operand2[31])));

      

    end

  endfunction

  

  

  

  function logic[31:0] TagSUB();

    TagSUB=operand1-operand2;

    temp = (operand1[31] & (!operand2[31]) & (!TagSUB[31])) || (!(operand1[31]) & operand2[31] & TagSUB[31]) || (operand1[1:0]!=2'b00 || operand2[1:0]!=0);

    if((op3==6'b100011) && (temp==1)) begin

      trap=1;

      tag_overflow=1; 

    end

    else begin

      N=TagSUB[31];

      Z= !(TagSUB==0);

      V= temp;

      C= (((!operand1[31]) && operand2[31]) || (TagSUB[31] && ((!operand1[31]) || operand2[31])));

    end

  endfunction

  

  

  function logic[31:0] MultS();

   

    MultS=operand1+operand2;

    Y={operand1[0],Y[31:0]};

    N=MultS[31];

    Z= !(MultS==0);

    V=(operand1[31] && operand2[31] && (!MultS[31])) || ((!operand1[31]) && (!operand2[31]) && MultS[31]);

    C=(operand1[31] && operand2[31]) || ((!MultS[31]) && ( operand1[31] || operand2[31]));

    

    

    

  endfunction

  

function logic[31:0] Multiply();

   

    if(op3==6'b001010 || op3==6'b011010) begin

      product=operand2*operand1;

   //   $display("product isss %d",product);

    end

    else begin

      product = $signed(operand2[31:0])*$signed(operand1[31:0]);

    end

    Y=product[63:32];

    Multiply=product[31:0];

  //  $display("Y isss %d",Y);

    if(op3==6'b011010 || op3==6'b011011) begin

      N=Multiply[31];

      Z= (Multiply==0);

      V=0;

      C=0;

    end

  endfunction

  

  function logic[31:0] Divide();

    

    if(operand2==0) begin

        //trap implementation

      $display("you no allowed divide by zero");

      end

      

    if(op3==6'b001110 || op3==6'b011110) begin

//      $display("here we are at divide so what's the deal bruh");

      temp_64 = {Y,operand1} / operand2;

//	$display("operand1,operand2,temp_64 %d %d %d", operand1,operand2,temp_64);

     // $display("ok first the number %b unsigned", temp_64);

      Divide=temp_64[31:0];

      temp= !(temp_64[63:32] == 0);

    end

	else begin



      temp_64= $signed({Y,operand1}) / $signed(operand2);

      Divide= temp_64[31:0];

      temp = !((temp_64[63:31]==0) || (temp_64[63:31]== (1<<33 -1)));

      

    end

     

   if(temp) begin

     

      if(op3==6'b001110 || op3==6'b011110) begin

        Divide= (1<<32 -1);

      end

     

      else begin

        if($signed(temp_64)>0) begin

          Divide = (1<<31-1);

        end

        else begin

          Divide=(1<<32); // two's compelement of -2^31

        end

        

      end 

     

    end 

    

    

   if(op3==6'b011110 || op3==6'b011111) begin

      N=Divide[31];

      Z= (Divide==0);

      V=temp;

      C=0;

    end 

        

    

  endfunction

  

  


  

  

  

  



    

endmodule

