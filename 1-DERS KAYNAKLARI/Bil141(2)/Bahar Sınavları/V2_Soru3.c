#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("bir cumle giriniz:\n");
	scanf("%[^\n]s", str);
	
	int i, l = strlen(str), sayac = 0;
	for (i = 0; i < l; i++) {
		if (str[i] == ' ') {
			continue;
		}
		printf("%c", str[i]);
		sayac++;
		if (sayac%5 == 0) {
			printf(" ");
		}
	}
	return 0;
}

