#include <stdio.h>

int main() {
	
	int n = 0, toplam = 0, order = 1;
	
	while(n != -1) {
		printf("%d. sayi giriniz:\n", order);
		scanf("%d", &n);
		if (n != -1) {
			toplam += n;
			order++;	
		} else {
			order--;
		}
		
	}
	printf("%d adet sayi girdiniz.\n", order);
	printf("girilen sayilarin toplami=%d\n", toplam);
	printf("girilen sayilarin ortalamasi=%.3f\n", (float)toplam/order);
	
	return 0;
}
