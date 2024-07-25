#include <stdio.h>

int main() {
	int n;
	printf("satir sayisini giriniz:\n");
	scanf("%d", &n);
	int m;
	printf("sutun sayisini giriniz:\n");
	scanf("%d", &m);
	
	int dizi[n][m];
	int toplamlar[n];
	int toplam = 0;
	
	int i;
	for (i = 0; i < n; i++) {
		int j;
		for (j = 0; j < m; j++) {
			printf("%d-%d indeksli elemani giriniz:\n", i, j);
			scanf("%d", &dizi[i][j]);
			toplam += dizi[i][j];
		}
		toplamlar[i] = toplam;
	}
	printf("toplamlar dizisi:\n");
	for (i = 0; i < n; i++) {
		printf("%d", toplamlar[i]);
		if (i < n-1) {
			printf(", ");
		}
	}
	return 0;
}

