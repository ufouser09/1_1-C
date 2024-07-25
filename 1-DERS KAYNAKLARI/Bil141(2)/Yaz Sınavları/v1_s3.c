#include<stdio.h>


int main() {
	int toplamYol = 0;
	float toplamZaman = 0.0;
	
	while(1) {
		int yol, hiz;
		printf("gidilen yolu giriniz:\n");
		scanf("%d", &yol);
		printf("bu yolu kac km/sa hizla gittiniz?:\n");
		scanf("%d", &hiz);
		
		if (toplamYol + yol >= 120) {
			yol = 120 - toplamYol;
		}
		toplamYol+=yol;
		toplamZaman+=(float)yol/hiz;
		if (toplamYol == 120)
			break;
	}
	printf("ortalama hiziniz : %f", toplamYol/toplamZaman);
	
	return 0;
}

