#include <stdio.h>
int main(){
	int sonuc;
	int a,i;
	printf("lutfen bir sayi giriniz \n");
	scanf("%d",&a);
	sonuc=0;
	i=1;
	while(i<=a){
		sonuc=sonuc+i;
		i++;
	}
	printf("sonuc degerim %d",sonuc);
	
	return 0;
}
//udemy20.41.c
//udemy sayfa 56
//81
