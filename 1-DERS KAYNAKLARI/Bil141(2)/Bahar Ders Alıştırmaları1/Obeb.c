#include <stdio.h>
#include "myheader.h"


int main() {

	int a = getIntFromUser();
	int b = getIntFromUser();
	
	int obeb = 1;
	
	int min = a < b ? a : b;
	
	int bolen;
	
	for (bolen = 2; bolen <= min; bolen++) {
		if (a%bolen == 0 && b%bolen == 0) {
			obeb = bolen;
		}
	}
	
	printf("%d ve %d sayilarinin en buyuk ortak boleni=%d.", a, b, obeb);
	

	return 0;
}





