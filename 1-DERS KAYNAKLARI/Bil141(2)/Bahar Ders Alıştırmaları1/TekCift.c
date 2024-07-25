#include <stdio.h>

int main() {
	
	int n;
	printf("bir sayi giriniz:\n");
	scanf("%d", &n);
	
	if (n&1) {
		printf("tek");
	} else {
		printf("cift");
	}
	
	return 0;
}
