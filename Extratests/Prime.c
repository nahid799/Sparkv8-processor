#include"prints.c"

int isprime(int a){
int result= 1;
int i;
for(i=2;i*i<=a;i++)
	if(a%i == 0) result = 0;


return result;

}

int main(){
int i;
for(i=2;i<50;i++){
print_decimal(i);
	if(isprime(i))
		print_(" is a prime number \n");
			
	else
	  	print_(" is NOT a prime number \n");
         







}


return 0;
}
