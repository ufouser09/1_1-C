#include <stdio.h>

int main() {
	int i, solKosegenToplami = 0, sagKosegenToplami = 0;
	int dizi[3][3] = {{1,2,3}, 
					  {4,5,6},
					  {7,8,9}};
	printf("dizi elemanlari:\n");					  
	for (i = 0; i < 3; i++) {
		int j;
		for (j = 0; j < 3; j++) {
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++) {
		int j;
		for (j = 0; j < 3; j++) {
			if (i == j)
				solKosegenToplami += dizi[i][j];
			if (i + j == 2) 
				sagKosegenToplami += dizi[i][j];
		}
	}
	printf("sol kosegen toplami = %d\nsag kosegen toplami = %d.", solKosegenToplami, sagKosegenToplami);
		
	return 0;
}

