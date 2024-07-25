#include <stdio.h>
#define N 100
int main(){
	char dizi[N]="efe girgin   asdasdasd";
	int counter=0;
	int i=0;
	int word=0;
	while(dizi[i]!='\0'){
		
		if(dizi[i]==32 && counter ==0){
		word++;
		printf("%c",dizi[i]);
		counter++;
		}
		else if((dizi[i]> (int)'A' && dizi[i]<(int)'Z')  || (dizi[i]>(int)'a'&&dizi[i]<(int)'z')  ){
			printf("%c",dizi[i]);
			counter=0;
		}
		i++;
	}
	printf("\nkelime sayisi=%d\n",word+1);
	return 0;
}
//birden fazla bosluk sayýsýna sahip bir cumle var ve aradaki bosluklar birden fazlaysa bunu tek bosluk haline getiriceksin sadece ingliz alfabesi ve nokta var cumlede.bi de kelime sayisini bulucaksin.
