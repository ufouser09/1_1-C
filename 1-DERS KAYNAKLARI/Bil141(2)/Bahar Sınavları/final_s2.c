#include <stdio.h>

int asciiToplami(char []);

int main() {
 	char s1[20], s2[20];
 	printf("1. dizgiyi giriniz:\n");
 	gets(s1);
 	printf("2. dizgiyi giriniz:\n");
 	gets(s2);
 	int ss1 = asciiToplami(s1);
 	int ss2 = asciiToplami(s2);
 	int eksik = ss1 > ss2 ? ss1 - ss2 : ss2 - ss1;
 	printf("eksik karakter = %c", eksik);
    return 0;
}

int asciiToplami(char str[]) {
	int toplam = 0;
	int i = 0;
	while(str[i]) {
		toplam += str[i];
		i++;
	}
	return toplam;
}
