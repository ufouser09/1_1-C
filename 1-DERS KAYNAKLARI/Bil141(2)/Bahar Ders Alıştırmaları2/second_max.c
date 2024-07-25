#include <stdio.h>

int main() {
	int dizi[] = {1, 2, 3, 4, 9, 10, 15};
	
	int n = sizeof(dizi)/sizeof(dizi[0]);
	
	int i, max = -1, secondMax = -1;
	
	for (i = 0; i < n; i++) {
		if (dizi[i] > max) {
			secondMax = max;
			max = dizi[i];
		} else if (dizi[i] > secondMax) {
			secondMax = dizi[i];
		}
	}
	
	printf("en buyuk eleman=%d\n", max);
	printf("2. buyuk eleman=%d\n", secondMax);
	
	return 0;
}
