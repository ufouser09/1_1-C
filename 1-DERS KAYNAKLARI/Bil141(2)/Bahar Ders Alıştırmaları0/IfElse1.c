#include <stdio.h>

int main() {
	
	int sayi1, sayi2;
	
	printf("iki sayi giriniz:\n");
	scanf("%d%d", &sayi1, &sayi2);
	
	if (sayi1 > sayi2) {
		printf("1. sayi buyuk");
	} else if(sayi1 < sayi2) {
		printf("2. sayi buyuk");
	} else {
		printf("sayilar esit");
	}
	return 0;
}
