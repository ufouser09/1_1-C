#include <stdio.h>
#include "myheader.h"


int main() {
	int n = getIntFromUser();
	int i;
	
	for (i = 0; i < n; i++) {
		int j;
		for (j = 0; j < n - i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
