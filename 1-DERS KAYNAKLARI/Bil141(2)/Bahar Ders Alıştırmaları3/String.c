#include <stdio.h>

int main() {
	char str[10];
	
	int i;
	
	printf("dizgi elemanlarinin adresleri:\n");
	for (i = 0; i < 10; i++) {
		printf("%d\n", &str[i]);
	}
	
	char str2[10] = "abcde";
	printf("%s\n", str2);
	str2[2] = '\0';
	
	printf("3. elemani null yaptik: %s\n", str2);
	printf("3. elemani atladik: %s", str2+3);

	return 0;
}
