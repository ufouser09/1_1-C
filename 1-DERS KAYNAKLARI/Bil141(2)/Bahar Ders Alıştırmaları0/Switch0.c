#include <stdio.h>

int main() {
	int zar;
	printf("bir sayi giriniz:\n");
	scanf("%d", &zar);
	
	switch(zar) {
		case 1:
		case 3:
		case 5:
			printf("tek sayi girdiniz.");
			break;
		case 2:
		case 4:
		case 6:
			printf("cift sayi girdiniz");
			break;
		default:
			printf("boyle bir zar olamaz");
	}
		
	return 0;
}
