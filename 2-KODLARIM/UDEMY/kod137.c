#include <stdio.h>

void sekilciz(int kenar,char karakter){
	int i,j;
	for(j=kenar;j>0;j--){
		for(i=1;i<=kenar-j;i++){
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++){
			printf("%c",karakter);
		}
		printf("\n");
	}
	for(j=1;j<=kenar;j++){
		for(i=1;i<=kenar-j;i++){
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++){
			printf("%c",karakter);
		}
		printf("\n");
		
	}
}
int main(void){
	int kenar;
	int karakter;
	printf("lutfen basilacak karakteri giriniz\n");
	scanf("%c",&karakter);
	printf("kenar sayisi\n");
	scanf("%d",&kenar);
	
	printf("\n\n\n");
	sekilciz(kenar,karakter);
	return 0;
}
//udemy 105.ders
//udemy53.c
//137
//ekrana kelebek seklinde yildiz yazdirma 
/* *******
    *****
     ***
      *
      *
     ***
	*****
   *******
   */	  
