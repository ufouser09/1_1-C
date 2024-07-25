#include <stdio.h>

int countElementInArray(int [], int, int);

int main() {
	int dizi[] = {1, 2, 2, 3, 4, 3, 2, 10, 15, 1, 1, 1};
	
	int n = sizeof(dizi)/sizeof(dizi[0]);
	
	printf("dizide %d adet 1 vardir\n", countElementInArray(dizi, n, 1));
	printf("dizide %d adet 2 vardir\n", countElementInArray(dizi, n, 2));
	printf("dizide %d adet 3 vardir\n", countElementInArray(dizi, n, 3));
	
	return 0;
}

int countElementInArray(int d[], int n, int a) {
	int i, count = 0;
	
	for (i = 0; i < n; i++) {
		if (d[i] == a) {
			count++;
		}
	}
	return count;
}
