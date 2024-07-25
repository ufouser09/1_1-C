#include <stdio.h>
#include <locale.h>

float alan_bul()
{
	float a;
	float h;
	
	printf("üçgenin tabanýný giriniz \n");
	scanf("%f",&a);
	printf("üçgenin yüksekliðini giriniz \n");
	
	scanf("%f",&h);
	
	return (a*h/2.0);
	}
	int main(){
		
		
		printf("üçgenin alaný %f dir\n",alan_bul());
		return 0;
		
	}
	//denendi ve compile edildi

