#include <stdio.h>
int main(void){
	int a,b,h;
	printf("lutfen a b ve h degerlerini giriniz\n");
	scanf("%d %d %d",&a,&b,&h);
	
	printf("taban alaný=%d\n",a*b);
	printf("yanal alanlar toplami=%d\n",2*a*h+2*b*h);
	printf("toplam alaným=%d\n",2*a*b+2*a*h+2*b*h);
	printf("hacmim=%d",a*b*h);
	
	
	return 0;
}
//udemy sayfa 51
//udemy20.35.c
//75
