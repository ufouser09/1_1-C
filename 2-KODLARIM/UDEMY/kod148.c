#include <stdio.h>
int main(void){
	char c;
	int sayma[26]=[0];
	int can,karakter,i;
	karakter=0;
	printf("lutfen bir text girin ve enter a basin\n");
	while((c=getchar())!='\n'){
		can=c-'a';
		if(can>=0 && can <26){
			sayma[can]++;
			else karakter++;
		}
		printf("\ngirdigimiz tekst %d karakter içeriyor:\n",karakter);
		for(i=0;i<26;i++){
			printf("%d kez %c\n",sayma[i],'a'+i);
		}
}
return 0;
}
//udemy119.ders
//udemy64.c
//148
//kullanicidan bir cumle girmesini isteyin 
//girilen cumle içindeki harflerin kac kere yazildiginiz ekrana bastirin





















//udemy64.c
//udemy119.ders
//148
