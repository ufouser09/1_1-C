#include <stdio.h>

int main() {
	int n1, n2, n3;
	printf("uc sayi giriniz:\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	int max = -1;
	
	if (n1 > max)
		max = n1;
	if (n2 > max)
		max = n2;
		
	if (n3 > max)
		max = n3;
		
	printf("en buyuk : %d\n", max);
	
	if (n1 > n2) {
		if (n1 > n3) {
			printf("1. sayi en buyuk");
		} else {
			printf("3. sayi en buyuk");
		}
	} else if (n2 > n3) {
		printf("2. sayi en buyuk");
	} else {
		printf("3. sayi en buyuk");
	}
	return 0;
}
