#include "prints.c"


/* THIS IS A PROGRAM TO TO TEST ALU OPERATIONS */


int main(){
int a;

int b=1;
a=10;
int i;
int k = 234877;
for(i =2;i<=100;i++){
int D = i%32+1;

a= (((a * i)%k ) + ((i* (b/D))%(i-1)))%k;


}
print_("\n_______________\n");
print_("Value after the calculations: "); print_decimal(a);
print_("\n_______________\n");
return 0;
}
