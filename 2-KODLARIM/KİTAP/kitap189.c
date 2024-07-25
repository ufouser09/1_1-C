#include <stdio.h>
#include  <stdlib.h>

char ch;
float puan;
float r;

char notVer(float puan){
	if(puan>=90)
	printf("A");
	else if(puan>=80)
	printf("B");
	else if(puan>=70)
	printf("C");
	else if(puan>=60)
	printf("D");
	else
	printf("F");
	return;
}
int main(){
	printf("puaninizi giriniz:");
	scanf("%f",&r);
	printf("aldýgýnýz not:%c",notVer(r));
}
//program 12.24
//198
