#include"prints.c"


int main(){
int i,j,n=15;
for(i=0 ;i< n;i++) {
	for(j=0;j<=n-i;j++) print_(" ");
	for(j=0;j<2*i+1 ;j++) print_("*");

print_("\n");



}




return 0;
}
