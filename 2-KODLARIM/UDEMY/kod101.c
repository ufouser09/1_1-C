#include <stdio.h>
int main(){
	float sure,ucret;
	printf("telefon konusma süresi:\n");
	scanf("%f",&sure);
	if(sure<=3){
		ucret=0.25;
	}
	else{
		ucret=0.25+(sure-3)*0.08;
	}
	printf("ucret :%f",ucret);
	return 0;
}
//udemy sayfa 69
//udemy20.61.c
//101
