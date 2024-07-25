#include <stdio.h>
int main(){
	int yas;
	int ugurluSayi;

	printf("lutfen yasinizi giriniz \n");
	scanf("%d",&yas);
	
	printf("lutfen ugurlu sayinizi giriniz \n");
	scanf("%d",&ugurluSayi);
	
	if((yas> 30)&&(yas<60)||((ugurluSayi==13))){
		printf("bravo");
	}
	return 0;
}
//programýn 12. satirini kontrol et
//udemy 13
//udemy sayfa 13
//24
//sayiyi 700 ugurlu sayiyi 13 bile alsak bravo diye cýkar
