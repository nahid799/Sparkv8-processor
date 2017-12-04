#include"prints.c"

int f(int n){

if(n==0 || n==1) return 1;

else return (f(n-1)+f(n-2));

}

int main(){
int z;
print_("The first 10 fibonacci numbers generated from recursive function are  ");
for(z = 0; z<10;z++)
{
print_decimal(f(z));
print_("\n");
}

return 0;
}
