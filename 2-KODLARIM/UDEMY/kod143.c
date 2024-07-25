#include <stdio.h>
int main(void){
	int n;
	int i;
	float sonuc;
	
	
	do
	{
		printf("N kac olsun");
		scanf("%d",&n);
	}
	while(n<1);
	
	for(i=1;i<=n;i++){
		sonuc +=(float)1/i;
	}
	printf("sonucumuz :%f",sonuc);
	return 0;
	
}
//udemy 113.ders
//udemy59.c
//143
//kullaniciya bir n degeri girmesini isteyin 
//1+1/2+1/3+.....1/n degerini hesaplayýn
