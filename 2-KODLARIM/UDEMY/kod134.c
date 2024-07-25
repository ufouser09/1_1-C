#include <stdio.h>
#include <math.h>

int seritoplami(int N){
	int i;
	int toplam=0;
	for(i=1;i<=N;i++){
		toplam=toplam+(pow(i,2));
	}
	return toplam;
}
int main(void){
	int n;
	printf("N degerini giriniz\n");
	scanf("%d",&n);
	printf("serinin toplami=%d\n",seritoplami(n));
	
	return 0;
}
//udemy109.ders
//udemy50.c
//134
//asagida verilen serinin hesaplanmasini saglayan c programini fonksiyon kullaranark yaziniz
//1^2+2^2+3^2+4^2
