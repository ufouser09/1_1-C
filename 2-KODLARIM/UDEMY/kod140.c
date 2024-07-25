#include <stdio.h>

void birlestir(intA[],intB[],intC[],int N,int K){
	int K,n,i;
	printf("ilk dizinin eleman sayisini giriniz\n");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++){
		printf("%d.inci sayi",i+1);
		scanf("%d",&A[i]);
	}
	printf("ikinci dizinin eleman sayisini giriniz\n");
	scanf("%d",&A[i]);
	int B[K];
	for(i=0;i<K;i++){
		printf("%d.inci sayi",i+1);
		scanf("%d",&B[i]);
	}
	int  birlesik[N+K];
	birlestir(A,B.birlesik,N,K);
	for(i=0;i<N+K;i++){
		printf("%d",birlesik[i]);
	}
	return 0;
}
//udemy 110.ders
//udemy 56.c
//140
//kullanici taradindan girilen a ve b dizilerine sirasiyla n ve k adet tam sayi girilmektedir
//bu iki dizinin birlestirerek tek bir dizi haline getirilmesini saglayan c programini asagidaki fonksþyon kullanrak yaziniz
//void birlestir(int A[],int b[],int c[],int n,int k)
