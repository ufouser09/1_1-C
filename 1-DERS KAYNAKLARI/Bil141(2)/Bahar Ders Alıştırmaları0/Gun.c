#include <stdio.h>

int main() {
	int gunSayisi, yil, ay, gun;
	printf("gun sayisini giriniz:\n");
	scanf("%d", &gunSayisi);
	
	yil = gunSayisi / 365;
	gunSayisi %= 365;
	ay = gunSayisi/30;
	gun = gunSayisi%30;
	
	printf("girilen gun sayisi %d yil, %d ay ve %d " 
			"gune karsilik gelir", yil, ay, gun);
	return 0;
}
