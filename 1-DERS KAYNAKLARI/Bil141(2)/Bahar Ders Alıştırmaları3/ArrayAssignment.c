#include <stdio.h>
#include <math.h>

int main() {
	int d[10];
	printf("dizinin ilk elemaninin adresi: %d\n", d);
	printf("bu da ilk elemanin adresi: %d\n", &d[0]);
	
	int i;
	for (i = 0; i < 10; i++) {
		d[i] = pow(2, i);
	}
	
	for (i = 0; i < 10; i++) {
		printf("%d. elemanin degeri = %d\n", i+1, d[i]);
	}
	
	int n;
	printf("yeni dizi kac elemanli olsun?\n");
	scanf("%d", &n);
	
	int dizi[n];
	
	for (i = 0; i < n; i++) {
		dizi[i] = -1;
	}
	dizi[0] = 3;
	dizi[n-1] = -3;
	
	for (i = 0; i < n; i++) {
		printf("%d. elemanin degeri = %d\n", i+1, dizi[i]);
	}
	return 0;
}

