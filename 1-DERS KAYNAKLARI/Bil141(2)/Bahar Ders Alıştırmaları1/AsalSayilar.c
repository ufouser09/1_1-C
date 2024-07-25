#include <stdio.h>

int main() {
	
	int i = 2;
	
	while(i <= 100) {
		int bolen = 2;
		int asal = 1;
	
		while(bolen <= i/2) {
			if (i%bolen == 0) {
				asal = 0;
				break;
			} 
			bolen++;
		}
	
		if (asal) {
			printf("%d asaldir.\n", i);
		}
		i++;
	}
	
	return 0;
}
