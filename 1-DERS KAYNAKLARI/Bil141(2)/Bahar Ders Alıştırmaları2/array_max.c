#include <stdio.h>

int main() {
	int dizi[] = {1, 2, 3, 4, 9, 8, 7};
	
	int n = sizeof(dizi)/sizeof(dizi[0]);
	
	int i, max = dizi[0];
	
	for (i = 0; i < n; i++) {
		if (dizi[i] > max) {
			max = dizi[i];
		}
	}
	
	printf("en buyuk eleman=%d\n", max);
	
	return 0;
}
