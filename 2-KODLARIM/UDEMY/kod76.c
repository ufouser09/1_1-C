#include <stdio.h>
int main(void){
	int a,b,h;
	int taban_alan;
	int yanal_alan;
	int toplam_alan;
	int hacim;
	
	printf("lutfen a b ve h degerlerini giriniz\n");
	scanf("%d %d %d",&a,&b,&h);
	
	taban_alan=a*b;
	yanal_alan=2*a*h+2*b*h;
	toplam_alan=2*a*b+2*a*h+2*b*h;
	hacim=a*b*h;
	
	
	printf("taban alani=%d\n",taban_alan);
	printf("yanal alanlar toplami=%d\n",yanal_alan);
	printf("toplam alanim=%d\n",toplam_alan);
	printf("hacmim=%d",hacim);
	
	
	return 0;
}
//udemy sayfa 51
//udemy20.36.c
//76
