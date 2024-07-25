#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("bir cumle giriniz:\n");
	gets(str);
	
	int i = 0, j = strlen(str) - 1;
	
	for (; i < j; i++, j--) {
		if(str[i] != str[j]) {
			printf("palindrome degildir.");
			return 0;
		}
	}
	printf("palindromedur.");
	
	return 0;	
}
