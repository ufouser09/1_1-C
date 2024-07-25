#include <stdio.h>
#include "myheader.h"


int main() {

	int n = getIntFromUser();
	
	int yildiz = 1, bosluk = n - 1;
	
	int i;
	for (i = 1; i <= n; i++) {
		int j;		
		for (j = 1; j <= bosluk; j++) {
			printf("  ");
		}
		for (j = 1; j <= yildiz; j++) {
			printf("* ");
		}
		bosluk--;
		yildiz++;
		printf("\n");
	}
}
