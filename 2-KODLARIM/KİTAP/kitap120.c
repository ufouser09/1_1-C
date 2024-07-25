#include <stdio.h>
#include <math.h>

int main(){
	float pi=3.1415926;
	double aci=0.0;
	
	do{
		printf("aci=%f\t tanjanti=%f\n",aci,tan(aci*pi/180.0));
		aci+=5.0;
	}while(aci<=90);
}

//program 10.58
//140
