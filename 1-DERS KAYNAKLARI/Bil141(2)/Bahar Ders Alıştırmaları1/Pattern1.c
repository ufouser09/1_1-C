#include <stdio.h>
#include "myheader.h"


int main() {
	
	
	int n = getIntFromUser();
	int i;
	for (i = 1; i <= n; i++) {
		int j;
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
