#include <stdio.h>

int main() {
	
	int i = 1;
	
	while(i <= 10) {
		printf("i = %d", i);
		if (i != 10) {
			printf(", ");	
		}
		i++;
	}
	
	return 0;
}
