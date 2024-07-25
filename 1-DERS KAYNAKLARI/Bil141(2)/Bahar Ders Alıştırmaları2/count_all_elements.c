#include <stdio.h>

int countElementInArray(int [], int, int);
int getMaxOfArray(int [], int);

int main() {
	int dizi[] = {1, 2, 2, 3, 4, 3, 2, 10, 15, 1, 1, 1};
	int n = sizeof(dizi)/sizeof(dizi[0]);
	int counterSize = getMaxOfArray(dizi, n) + 1;
	int counterArray[counterSize];
	
	int i;
	for (i = 0; i < counterSize; i++) {
		counterArray[i] = 0;
	}
	
	for (i = 0; i < n; i++) {
		counterArray[dizi[i]]++;		
	}

	for (i = 0; i < counterSize; i++) {
		if (counterArray[i] != 0) {
			printf("dizide %d adet %d vardir\n", counterArray[i], i);			
		}
	}	
	
	return 0;
}

int getMaxOfArray(int d[], int n) {
	int i, max = d[0];
	
	for(i = 0; i < n; i++) {
		if (d[i] > max) {
			max = d[i];
		}
	}
	return max;
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
