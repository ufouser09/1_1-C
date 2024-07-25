#include <stdio.h>
int main(){
	char cumle[150];
	int i;
	int encok;
	char harf;
	int kucukharf[26]={0};
	printf("lutfen bir cumle giriniz \n");
	gets(cumle);
	
	while(cumle[i]){
		if(cumle[i]>='a'&& cumle[i]<='z'){
			kucukharf[cumle[i]-'a']++;
		}
		i++;
	}
	encok=kucukharf[0];
	for(i=1;i<26;i++){
		if(kucukharf[i] !=0){
			if(kucukharf[i]>encok){
				encok=kucukharf[i];
				harf=i+'a';
			}
		}
	}
	printf("en fazla kullanilan harf:%c",harf);
	return 0;
}
//udemy sayfa 82 ve 83
//udemy 28.c
//112
