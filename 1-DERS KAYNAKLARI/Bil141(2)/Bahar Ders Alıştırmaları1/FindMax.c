#include <stdio.h>

int findMax(int, int, int);

int main() {
	float ortalama = 0.0;
	int vize1, vize2, final;
	
	int vize1_1, vize1_2, vize1_3;
	printf("vize1 den aldiginiz 3 notu giriniz:\n");
	scanf("%d%d%d", &vize1_1, &vize1_2, &vize1_3);
	
	vize1 = findMax(vize1_1, vize1_2, vize1_3);
	ortalama += (double)vize1/4;
	
	int vize2_1, vize2_2, vize2_3;
	printf("vize2 den aldiginiz notlari giriniz:\n");
	scanf("%d%d%d", &vize2_1, &vize2_2, &vize2_3);
	
	vize2 = findMax(vize2_1, vize2_2, vize2_3);
	ortalama += (double)vize2/4;
	
	int final1, final2, final3;
	printf("finalden aldiginiz notlari giriniz:\n");
	scanf("%d%d%d", &final1, &final2, &final3);
	
	final = findMax(final1, final2, final3);
	ortalama += (double)final/2;
	
	printf("ortalamaniz:%.2f", ortalama);

	return 0;
}


int findMax(int n1, int n2, int n3) {
	if (n1 > n2) {
		if (n1 > n3) {
			return n1;
		} else {
			return n3;
		}
	} else if (n2 > n3) {
		return n2;
	} else {
		return n3;
	}
}


