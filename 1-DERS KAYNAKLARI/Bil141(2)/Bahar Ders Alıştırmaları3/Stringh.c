#include <stdio.h>
#include <string.h>

void esitMi(char [], char []);

int main() {
	char s1[100] = "abs";
	char s2[100] = "abs";
	esitMi(s1, s2);
	
	strcpy(s2, "xyz");
	
	esitMi(s1, s2);	
	
	
	strcpy(s1, "012");
	strcpy(s2, "345");
	
	printf("birlesimi = %s\n", strncat(s1, s2, 2));
	
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	
	strcpy(s1, "abc");
	strcpy(s2, "x");
	
	strcpy(s1, s2);
	printf("s1 strcpy sonrasi %s degerini alir.\n", s1);
	
	strcpy(s1, "abc");
	strcpy(s2, "x");
	
	strncpy(s1, s2, 1);
	printf("s1 strNcpy sonrasi %s degerini alir.\n", s1);
	
	strcpy(s1, "abc");
	strcpy(s2, "x");
	
	strncpy(s1 + 1, s2, 1);
	printf("strNcpy ile araya karakter ekledik: %s.\n", s1);
	
	return 0;
}

void esitMi(char s1[], char s2[]) {
	if (!strcmp(s1, s2)) {
		printf("%s ve %s ifadeleri esit.\n", s1, s2);
	} else {
		printf("%s ve %s ifadeleri esit degil.\n", s1, s2);
	}
}


