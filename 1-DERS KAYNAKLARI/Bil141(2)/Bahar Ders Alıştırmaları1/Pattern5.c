#include <stdio.h>
#include "myheader.h"


int main() {
	int n = getIntFromUser();
	int bosluk = n - 1, yildiz = 1;
	
	int i;
	for (i = 1; i <= n; i++) {
		int j;
		for (j = 1; j <= bosluk; j++) {
			printf("  ");
		}
		for (j = 1; j <= yildiz; j++) {
			printf("* ");
		}
		
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
	
	return 0;
}

