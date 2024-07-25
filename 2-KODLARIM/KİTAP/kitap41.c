#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL," ");
	
	int x=10,y=20,z;
	{

	printf("takastan once:\n");
	printf("x=%d ve y=%d \n",x,y);
	z=x;
	x=y;
	y=z;
}
	
	printf("takastan sonra :\n");
	printf("x=%d ve y=%d\n",x,y);
	
}
//program 9.1
//82
//süslü parantezlerin anlamýný sor
//denendi ve compile edildi
