#include <stdio.h>

int main() {
	
	int a, kalan = 0;
	printf("bir sayi giriniz:\n");
	scanf("%d", &a);
	
	if (a&1 || a&2) {
		printf("4 ile bolunemez\n");
		if (a&1) {
			kalan += 1;
		}
		if (a&2) {
			kalan += 2;
		}
		printf("4 ile bolumunden kalan=%d", kalan);
	} else {
		printf("4 ile bolunebilir");
	}

	return 0;
}

