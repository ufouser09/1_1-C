#include <stdio.h>
int main(void){
	int a,b;
	printf("lutfen 2 adet sayi giriniz:\n");
	scanf("%d %d",&a,&b);
	
	if((a==0)||(b==0)){
		printf("carpim degeri 0dir.\n");
	}
	else if(((a<0)&&(b<0))||(a>0)&&(b>0))){
		printf("carpim degeri pozitiftir\n");
	}
	else{
		printf("carpim degeri negatiftir.");
	}
	return 0;
}
//udemy114.ders
//udemy60.c
//144
//iki sayinin carpim degerinin pozitif mi negatif mi oldugnu gösteren bir c programi yazin 
//her iki sayidan biri pozitifse carpim degeri 0dir.
//her iki sayi negatif veya pozitifse carpim degeri pozitiftir
//degilse carpim degeri negatiftir
