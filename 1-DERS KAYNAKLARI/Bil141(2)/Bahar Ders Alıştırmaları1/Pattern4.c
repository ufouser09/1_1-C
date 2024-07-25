#include <stdio.h>
#include "myheader.h"


int main() {

	int n = getIntFromUser();
	
	int i;
	int yildiz = 1, bosluk = n - 1;
	for (i = 0; i < n; i++) {
		int j;
		for (j = 0; j < bosluk; j++) {
			printf("  ");
		}
		for (j = 0; j < yildiz; j++) {
			if (i == n-1) {
				printf("* ");
			} else {
				if (j == 0 || j == yildiz - 1) {
					printf("* ");	
				} else {
					printf("  ");
				}
			}
		}
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
	
	return 0;
}


