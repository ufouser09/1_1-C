#include <stdio.h>
int main(){
	int a,b,c;
	int min,max;
	
	printf("lutfen 3 adet sayi giriniz\n");
	scanf("%d %d %d",&a,&b,&c);
	
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("maximum degerimiz %d\n",max);
	min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	printf("minimum degerimiz %d",min);
	return 0;
}
//udemy sayfa 52
//udemy 20.37.c
//77
