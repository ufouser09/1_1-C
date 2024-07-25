#include <stdio.h>

int main(void){
	int a,b,c,x;
	int sonuc;
	
	printf("lutfen a,b,c ve x degerlerini giriniz\n");
	scanf("%d %d %d %d",&a,&b,&c,&x);
	
	sonuc=a*x*x+b*x+c;
	printf("ax^2+bx+c degerim=%d",sonuc);
	return 0;
}
//udemy sayfa 50
//udemy20.34
//74
