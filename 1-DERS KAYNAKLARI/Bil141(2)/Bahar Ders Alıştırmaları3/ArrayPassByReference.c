#include <stdio.h>

void f(int []);

int main() {
	printf("dizinin eleman sayisini giriniz:\n");
	int n;
	scanf("%d", &n);
	int dizi[n];
	int i;
	for (i = 0; i < n; i++) {
		dizi[i] = -1;
	}
	printf("fonksiyon oncesi dizi:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", dizi[i]);
	}
	f(dizi);	
	printf("fonksiyon sonrasi dizi:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", dizi[i]);
	}
	return 0;
}

void f(int x[]) {
	x[0] = 5;
}

