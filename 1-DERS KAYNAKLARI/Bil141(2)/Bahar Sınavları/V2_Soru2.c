#include <stdio.h>
#include <string.h>

int main() {
	int n;
	printf("satir sayisini giriniz:\n");
	scanf("%d", &n);
	
	char str[20];
	printf("sekle yazilacak ifadeyi giriniz:\n");
	scanf("%s", str);
	
	int i, bosluk = n - 1, karakter = 1, l = strlen(str), index = 0;
	for (i = 0; i < n; i++) {
		int b;
		for (b = 0; b < bosluk; b++) {
			printf("  ");
		}
		int k;
		for (k = 0; k < karakter; k++) {
			printf("%c ", str[index%l]);
			index++;
		}
		bosluk--;
		karakter+=2;
		printf("\n");
	}
	return 0;
}

