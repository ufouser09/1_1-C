#include <stdio.h>

int main() {
	
	int n, basamakSayisi = 0, bToplam = 0;
	printf("bir sayi giriniz:\n");
	scanf("%d", &n);
	
	while(n != 0) {
		basamakSayisi++;
		bToplam += n%10;
		n /= 10;
	}
	
	printf("basamak sayisi=%d\n", basamakSayisi);
	printf("basamak toplami=%d", bToplam);
	
	return 0;
}
