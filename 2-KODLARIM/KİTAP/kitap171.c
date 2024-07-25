#include <stdio.h>


int topla(int x,int y){

printf("%d \n",x);
printf("%d \n",y);

return x+y;
}
int main(void){
	int toplam,a,b;
	printf("bir sayi giriniz \n");
	scanf("%d",&a);
	printf("bir daha sayi giriniz \n");
	scanf("%d",&b);
	
	toplam=topla(a,b);
	printf("toplam =%d",toplam);
	return 0;
	
}
//program 12.7
//183
