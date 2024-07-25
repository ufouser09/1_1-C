#include <stdio.h>
#include <math.h>

float x=1.2;
float y=4.3;
float hipotenus_bul(x,y){

	float hipotenus;
	hipotenus = sqrt(x*x+y*y);
	printf("%d %d \n",&x,&y);
	return hipotenus;
}

int main(void){
	printf("%2f %2f \n",x,y);
	printf("%d %d \n",&x,&y);
	printf("%f \n",hipotenus_bul(3.7,4.8));
	printf("%f %f \n",x,y);
	return 0;
}
//program 12.4
//179
//programa bi da bak
