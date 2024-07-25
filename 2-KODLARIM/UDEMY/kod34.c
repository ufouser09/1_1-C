#include <stdio.h>
int main(){
	float a,b;
	char op;
	printf("lutfen operator giriniz \n");
	scanf("%c",&op);
	
	printf("lutfen 2 sayi giriniz \n");
	scanf("%f%f",&a,&b);
	
	switch(op)
	{
		case '+':printf("%.2f + %.2f=%.2f",a,b,a+b);
		break;
		case '-':printf("%.2f -%.2f=%.2f",a,b,a-b);
		break;
		case'/':printf("%.2f/%.2f=%.2f",a,b,a/b);
		break;
		case'*':printf("%.2f*%.2f=%.2f",a,b,a*b);
		break;
		default:printf("hatali giris yaptiniz \n");
	}
	return 0;
}
//udemy sayfa 22
//udemy 19.1
//34
