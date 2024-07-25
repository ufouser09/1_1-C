#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL," ");
	int a=5,b,min;
	
	b=(3>2) ? (3>a) : (3<a);
	printf("%d \n",(3>a));
	printf("%d \n",b);
	
	if(3>2)
	b=(3>a);
	else
	b=(3<a);
	printf("%d \n",b);
}
//program 9.19
//103
//bu programýn mantigini sor
