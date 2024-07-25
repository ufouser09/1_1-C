#include <stdio.h>
#include <string.h>

int main() {
	int n, m;
	printf("satir sayisini giriniz:\n");
	scanf("%d", &n);
	printf("sutun sayisini giriniz:\n");
	scanf("%d", &m);
	char dizi[n][m];
	char str[50] = "BIL141";
	int ind = 0;
	int l = strlen(str);
	
	int i;
	for (i = 0; i < n; i++) {
		int j;
		for (j = 0; j < m; j++) {
			dizi[i][j] = str[ind%l];
			ind++;
		}
	}
	for (i = 0; i < n; i++)  {
		int j;
		for (j = 0; j < m; j++) {
			printf("%c ", dizi[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


