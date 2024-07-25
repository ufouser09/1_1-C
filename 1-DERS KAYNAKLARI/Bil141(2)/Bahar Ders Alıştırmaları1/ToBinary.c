#include <stdio.h>

int main() {
	
	int n = 8;
	int binary = 0;
	int factor = 1;
	while(n != 0) {
		binary += n%2 * factor;
		n /= 2;
		factor *= 10;
	}
	
	printf("%d", binary);
	
	return 0;
}
