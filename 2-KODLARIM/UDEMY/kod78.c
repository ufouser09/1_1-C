#include <stdio.h>
int main(void){
	int a,b;
	printf("lutfen 2 adet sayi giriniz \n");
	scanf("%d%d",&a,&b);
	
	if(a==b){
		printf("2 sayi birbirine eþittir \n");
	}
	if(a!=b){
		printf("2 sayi birbirine esit degildir \n");
	}
	if(a<b){
		printf("a degerim b den kucuktur \n");
	}
	if(a>b){
		printf("a degerim b den buyuktur");
	}
	return 0;
}
//udemy20.38.c
//udemy sayfa 53
//78
