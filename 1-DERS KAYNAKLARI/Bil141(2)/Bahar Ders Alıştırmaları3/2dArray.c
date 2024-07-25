#include <stdio.h>
#include <string.h>

int main() {
	int n, m;	
	printf("satir sayisini giriniz:\n");
	scanf("%d", &n);
	printf("sutun sayisini giriniz:\n");
	scanf("%d", &m);
	
	int dizi[n][m];
	
	int i;
	for(i = 0; i < n; i++) {
		int j;
		for (j = 0; j < m; j++) {
			printf("%d-%d elemani giriniz:\n", i, j);
			scanf("%d", &dizi[i][j]);
		}
	}
	
	for(i = 0; i < n; i++) {
		int j;
		for (j = 0; j < m; j++) {
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	int d[4][3] = {1, 2, 4, 5, 6};
	printf("tek parantezle atama yapilirsa:\n");
	for(i = 0; i < 4; i++) {
		int j;
		for (j = 0; j < 3; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
	int d2[4][3] = {{1, 2}, {4}, {5}, {6}};
	printf("gruplara ayrilarak atama yapilirsa:\n");
	for(i = 0; i < 4; i++) {
		int j;
		for (j = 0; j < 3; j++) {
			printf("%d ", d2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

