#include <stdio.h>

int main() {

	int n;
	
	printf("notunuzu giriniz:\n");
	scanf("%d", &n);
	
	switch(n) {
		case 10:
		case 9:
		case 8:
			printf("aferin");
			break;
		case 7:
		case 6:
			printf("idare eder");
			break;
		case 5:
		case 4:
			printf("calis");
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			printf("kaldin");
			break;
		default:
			printf("gecerli not giriniz");
			break;
	}
	
	return 0;
}
