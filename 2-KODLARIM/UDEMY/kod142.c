#include <stdio.h>

int main(void){
	float x;
	do{
		printf("bir pozitif sayi giriniz");
		scanf("%f",&x);
		if(x<0){
			printf("lutfen pozitif bir sayi giriniz\n");
		}
		if(x<0)
		continue;
		printf("sayimizin karekoku:%f\n",sqrt(x));
	}
	while(x==2);
	return 0;
}
//udemy 112.ders
//udemy58.c
//142
//kullanicidan pozitif bir sayi girmesini isteyin 
//girdiginiz sayinin karekokunu hesaplayýn 
//girdiiniz sayi negatifse yeni bir sayi girmesini isteyin 
//girdiginiz sayi 0 ise program calýsmayi durdursun 
