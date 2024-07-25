#include <stdio.h>

int a = 5;//global
int b = 10;//global

int main () {
	
	int a = 3;
	int b = 7;
	
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	
	{
		int a = 12;
		int b = 13;
		printf("a:%d\n", a);
		printf("b:%d\n", b);
		a++;
	}
	
	printf("a:%d\n", a);
	printf("b:%d\n", b);

	return 0;	
}



