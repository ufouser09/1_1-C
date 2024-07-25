#include <stdio.h>


int main() {
	int i;
	
	for (i = 1; i <= 10; i++) {
		int f = 1;
		
		int j;
		
		for (j = 1; j <= i; j++) {
			f *= j;
		}
		
		printf("%d! = %d\n", i, f);
		
	}
	
}
