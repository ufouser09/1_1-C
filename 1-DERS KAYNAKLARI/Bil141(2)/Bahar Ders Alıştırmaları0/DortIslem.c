#include <stdio.h>
#include <math.h>

int main() {
	int s1, s2, sonuc = -1;
	char islem;
	printf("iki sayi giriniz:\n");
	scanf("%d%d", &s1, &s2);
	
	printf("yapmak istediginiz islemi giriniz:\n"
			"toplama icin +\n"
			"cikarma icin -\n"
			"carpma icin *\n"
			"bolme icin /\n");
	scanf(" %c", &islem);
	
	switch(islem) {
		case '+' :
			sonuc = s1 + s2;
			break;
		case '-' :
			sonuc = s1 - s2;
			break;
		case '*' :
			sonuc = s1 * s2;
			break;
		case '/' :
			sonuc = s1 / s2;
			break;
		default:
			printf("gecerli islem giriniz.");
	}
	if (sonuc != -1) {
		printf("sonuc:%d", sonuc);
	}
		
	return 0;
}
