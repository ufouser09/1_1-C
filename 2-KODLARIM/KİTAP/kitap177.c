#include <stdio.h>
#include <math.h>

float us(float,float);

int main(){
	float a,b;
	printf("taban ve ussu giriniz \n");
	scanf("%f %f",&a,&b);
	
	printf("%3f",us(a,b));
}

float us(float x,float y){
	return pow(x,y);
}
//program 12.13
//189
