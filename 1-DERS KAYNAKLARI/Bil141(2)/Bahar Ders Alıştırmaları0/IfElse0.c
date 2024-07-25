#include <stdio.h>
#include <math.h>

int main() {
	int sayi;
	
	printf("bir sayi giriniz:\n");
	scanf("%d", &sayi);
	
	int kare, kup;
	printf("girdiginiz sayinin karesini ve kupu kactir?\n");
	scanf("%d%d", &kare, &kup);
	
	if (kare == pow(sayi, 2)) {
		printf("karesini dogru girdiniz\n");
	} else {
		printf("karesi yanlis\n");
	}
	
	if (kup == pow(sayi, 3)) {
		printf("kupunu dogru girdiniz\n");
	} else {
		printf("kupunu yanlis girdin\n");
	}
	return 0;
}
