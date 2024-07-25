#include <stdio.h>
int main(){
	int dizi[4];
	int i;
	i=0;
	while(i<4){
		printf("lutfen bir tam sayi degeri giriniz \n");
		scanf("%d",&dizi[i]);
		i++;
	}
	int toplam=0;
	for(i=0;i<4;i++){
		toplam=toplam+dizi[i];
		
	}
	printf("dizimin toplami=%d",toplam);
	return 0;
}
//udemy sayfa 26
//udemy20
//40
