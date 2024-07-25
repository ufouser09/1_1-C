#include <stdio.h>

int enBuyuk(int,int,int);
	
	int main(){
enBuyuk(10,20,30);
return 0;		
}
int enBuyuk(a,b,c){
	int m1,m2;
	printf("sayilar a=%d,b=%d,c=%d \n",a,b,c);
	m1=max(a,b);
	m2=max(m1,c);
	return printf("en buyuk sayi %d \n",m2);
}

int max(x,y){
	int max;
	if(x<y)
	max=y;
	else 
	max=x;
	return max;
}
//program 12.14
//191
