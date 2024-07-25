#include <stdio.h>

int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return(fibonacci(n-2)+fibonacci(n-1));
	}
}
int main(void){
	int sayi,i;
	printf("kac adet sayi uretilecek\n");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		printf("%d\n",fibonacci(i));
	}
	return 0;
}
//udemy76.c
//udemy 182.ders
//160
//fibonacci dizisi nedir:fibonacci dizisi 0 ve 1 ile baslayan ve herhangi bir sayinin kendisinden önce gelen 2 sayinin toplanmasi ile elde edildigi bir sayi disidir buna göre klavyeden kac adet fibonacci sayisi üretilecegi bilgisi girilerek sayilarin üretilmesini saglayan c programini recursive fonksiyon kullanarak yaziniz
