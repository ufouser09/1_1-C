#include <stdio.h>
int main(){
	char kelime[100];
	int i=0;
	int j=0;
	printf("lutfen bir kelime giriniz \n");
	gets(kelime);
	
	while(i<strlen(kelime)){
		j=0;
		while(j<=i){
			printf("%c",kelime[j]);
			j++;
		}
		printf("\n");
		i++;
		
	}
	return 0;
	
}
//udemy sayfa 81
//udemy27.c
//111
