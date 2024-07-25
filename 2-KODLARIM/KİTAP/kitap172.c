#include <stdio.h>
#include <math.h>

int f(int);

int main(){
	int a=1;
	printf("main() de &a=%d",&a);
	printf("\n main de a =%d \n",a);
	
	printf("\nf(a)=%d \n",f(a));
	printf("\n main icinde a=%d \n",a);
	
	return 0;
	
}
int f(int a){
	printf("f()nin parametresinin adresi &a=%d \n",&a);
	
	printf("f() nin parametresinin degeri a=%d \n",a);
	a=100;
	printf("f() icinde a =%d \n",a);
	
	return a;
}
//program 12.8
//184
//programa bi da bak
