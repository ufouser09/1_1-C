#include <stdio.h>
#include "myheader.h"


int main() {
	int n = getIntFromUser();
	int a = 1;
	
	int i;
	for (i = 1; i <= n; i++) {
		int j;
		
		for (j = 1; j <= i; j++) {
			printf("%d ", a);
			a++;
		}
		
		printf("\n");
	}
	
	return 0;
}

