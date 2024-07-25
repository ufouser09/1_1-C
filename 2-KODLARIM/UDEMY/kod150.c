#include <stdio.h>

void bolunebilirlik(int *n){
	if(*n%2==0){
		printf("sayimiz cift sayidir");
	}
	if(*n%3==0){
		printf("sayimiz 3 un katidir");
	}
	if((*n%2==0)&&(*n%3==0)){
		printf("sayimiz 6 nin tam katidir");
	}
}
int main(void){
	int sayi;
	printf("lutfen bir sayi giriniz:\n");
	scanf("%d",&sayi);
	bolunebilirlik(&sayi);
	
	return 0;
}
//udemy 121.ders
//udemy66.c
//150
