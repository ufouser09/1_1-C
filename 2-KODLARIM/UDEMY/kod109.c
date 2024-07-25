#include <stdio.h>
int main(){
	char cumle[100];
	int i,j,sayac=0;
	printf("lutfen bir cumle giriniz \n");
	gets(cumle);
	for(i=0;cumle[i];i++){
		printf("%c",cumle[i]);
		
		if(cumle[i]==32){
			printf("\n");
		}
		sayac++;
		for(j=0;j<sayac;j++){
			printf("\t");
		}
	}
	return 0;
}
//udemy25.c
//udemy sayfa 79
//109
