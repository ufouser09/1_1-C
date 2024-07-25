#include <stdio.h>
#include <math.h>

int x=1;
int y=4;
float hipotenus_bul(x,y){
	float hipotenus;
	hipotenus=sqrt(x*x+y*y);
	printf("%d  %d \n",&x,&y);
	return hipotenus;
}
int main(void){
	printf("%d  %d\n",x,y);
	printf("%d  %d\n",&x,&y);
	printf("%f  \n",hipotenus_bul(3,4));
	printf("%d  %d \n",x,y);
	return 0;
}
//program 12.2
//177
//bu programa bi da bak
