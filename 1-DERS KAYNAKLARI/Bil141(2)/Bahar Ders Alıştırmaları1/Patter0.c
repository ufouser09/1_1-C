#include <stdio.h>
#include "myheader.h"


int main() {
	int n = getIntFromUser();
	int m = getIntFromUser();
	
	int i;
	for (i = 1; i <= n; i++) {
		int j;
		for (j = 0; j < m; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
}
