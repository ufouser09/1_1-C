#include <stdio.h>

int bolum(int bolunen,int bolen){
	if(bolen==0){
		return 0;
	}
	else if(bolunen-bolen==0){
		return 1;
	}
	else if(bolunen<bolen){
		return 0;
	}
	else{
		return(1+bolum(bolunen-bolen,bolen));
	}
}
int main(void){
	int a,b;
	printf("bolunen sayiyi giriniz\n");
	scanf("%d",&a);
	printf("lutfen bolen sayiyi giriniz");
	scanf("%d",&b);
	printf("bolum=%d\n",bolum(a,b));
	printf("kalan=%d",a-(bolum(a,b)*b));
	
	return 0;
}
//udemy75.c
//udemy181.ders
//159
//klavyeden girilen 2 tam sayinin bolumu(A/B)bolme sembolu kullanmadan gerceklestiren c programini recursive fonksiyon yardýmýyla yaziniz
