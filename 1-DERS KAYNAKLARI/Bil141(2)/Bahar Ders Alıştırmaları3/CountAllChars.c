#include <string.h>

int main() {
	char str[100];
	printf("bir cumle giriniz:\n");
	gets(str);
	int charCounts[256] = {};
	int length = strlen(str);
	int i;
	for (i = 0; i < length; i++) {
		charCounts[str[i]]++;
	}
	for (i = 0; i < 256; i++) {
		if (charCounts[i] != 0) {
			printf("%c karakteri %d adet vardir.\n", i, charCounts[i]);	
		}
	}
	return 0;
}
