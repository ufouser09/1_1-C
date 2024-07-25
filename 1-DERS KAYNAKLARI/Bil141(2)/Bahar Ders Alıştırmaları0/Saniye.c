#include <stdio.h>

int main() {
	int girilenSaniye, saat, dakika, saniye;
	printf("saniye bilgisi giriniz:\n");
	scanf("%d", &girilenSaniye);
	
	saat = girilenSaniye/3600;
	girilenSaniye %= 3600;
	
	dakika = girilenSaniye/60;
	saniye = girilenSaniye%60;

	printf("girdiginiz saniye:\n"
			"%d saat, %d dakika, %d saniyeye karsilik gelir",
			saat, dakika, saniye);
		
	return 0;
}
