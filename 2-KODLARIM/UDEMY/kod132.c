#include <stdio.h>
#include <math.h>
float ucgenimalani(int a,int b,int c){
	float u,alan;
	u=(a+b+c)/2;
	alan=sqrt(u*(u-a)*(u-b)*(u-c));
	return alan;
	
	
}

int main(void){
	int a,b,c;
	printf("uc kenar uzunlugunu giriniz\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("eskenar ucgenin alani=%.2f",ucgeninalani(a,b,c));
	return 0;
}
//udemy 108.ders
//udemy48.c
//132
//kenar uzunluklari birbirinden farkli bir ücgenin alaninin bulunmasini saglayan c programini fonksiyon kullanarak yaziniz
//u=(a+b+c)/2
//alan^2=u*(u-a)*(u-b)*(u-c)
