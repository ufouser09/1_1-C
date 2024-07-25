#include <stdio.h>
int main(){
	int sonuc;
	int a,i;
	printf("lutfen bir sayi giriniz \n");
	scanf("%d",&a);
	sonuc=0;
	i=1;
	while(i<=a){
		if(i==a){
			printf("%d",a);
		}
		else{
			printf("%d+",i);
		}
		sonuc=sonuc+i;
		i++;
	}
	printf("=%d",sonuc);
	return 0;
}
//udemy sayfa 56
//udemy20.42.c
//82
