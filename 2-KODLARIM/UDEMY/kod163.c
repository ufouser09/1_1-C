#include <stdio.h>


int usss(int us,int taban){
	int sonuc;
	if(us==0){
		sonuc=1;
	}
	else{
		sonuc=taban*uss(us-1,taban);
	}
	return sonuc;
}
int main(void){
	int us,taban;
	printf("lutfen taban degerini giriniz");
	scanf("%d",&taban);
	printf("lutfen us degerini giriniz");
	scanf("%d",&us);
	printf("%d ussu %d=%d",taban,us,usss(us,taban));
	
	
	return 0;
}
//udemy79.c
//udemy 185.ders
//163
//taban ve us degerleri klavyeden girilmek üzere a^b ifadesinin hesaplatılmasını saglayan c programini recursive fonksiyon yardımıyla yaziniz
