#include <stdio.h>
#include <locale.h>

float alan_bul()
{
	float a;
	float h;
	
	printf("��genin taban�n� giriniz \n");
	scanf("%f",&a);
	printf("��genin y�ksekli�ini giriniz \n");
	
	scanf("%f",&h);
	
	return (a*h/2.0);
	}
	int main(){
		
		
		printf("��genin alan� %f dir\n",alan_bul());
		return 0;
		
	}
	//denendi ve compile edildi

