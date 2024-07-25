#include <stdio.h>

int main() {
	int secim;
	printf ("1-7 arasi bir gun seciniz:\n");
	scanf("%d", &secim);
	
	switch(secim) {
		case 1:
			printf("pazartesi");
			break;
		case 2:
			printf("sali");
			break;
		case 3:
			printf("carsamba");
			break;
		case 4:
			printf("persembe");
			break;
		case 5:
			printf("cuma");
			break;
		case 6:
		case 7:
			printf("haftasonu");
			break;
		default:
			printf("yanlis girdiniz");
	}
		
	return 0;
}
