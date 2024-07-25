#include <stdio.h>
#include <math.h>

int x=1;
int y=4;
float hipotenus_bul(float x,float y){
	int a=x;
	int b=y;
	float hipotenus;
	hipotenus=sqrt(a*a+b*b);
	printf("%d %d \n",&x,&y);
	return hipotenus;
	
}
int main(void){
	printf("%d %d \n",x,y);
	printf("%d %d \n",&x,&y);
	printf("%f \n",hipotenus_bul(3.2,4.7));
	printf("%d %d \n",x,y);
	return 0;
}
//program 12.3
//178
