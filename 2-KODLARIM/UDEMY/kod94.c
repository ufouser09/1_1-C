#include <stdio.h>
int main(){
	char kod;
	float alan,ucret=0;
	printf("hali tipi T B S");
	scanf("%c",&kod);
	printf("lutfen alani giriniz");
	scanf("%f",&alan);
	
	if(kod=='T'){
		ucret=alan*18;
	}
	else if(kod=='B'){
		ucret=alan*17;
	}
	else if(kod=='S'){
		ucret=alan*19;
	}
	else{
		printf("kod dogru degil");
	}
	printf("odenmesi gereken ucret %f",ucret);
	return 0;
}
//udemy sayfa 64
//udemy20.54
//94
