#include <stdio.h>
#include <math.h>
float hipotenus_bul(int x,int y){
	float hipotenus;
	hipotenus=sqrt(x*x+y*y);
	return hipotenus;
}
int main(void){
	printf("%f",hipotenus_bul(3,4));
	return 0;
}
//program 12.1
//177
