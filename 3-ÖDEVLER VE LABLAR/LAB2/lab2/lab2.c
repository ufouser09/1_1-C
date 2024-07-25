#include <stdio.h>
int main(){
	char cumle[200]="efe girgin. yildiz teknik universitesi.bilgisayar muhendisligi";
	int alfabe=(int)'A';
	int sira;
	int i=0;
	
	if(cumle[0]>='a'&&cumle[0]<='z'){
				sira=(int)cumle[i]-(int)'a';
			cumle[i]=(char)(alfabe+sira);
		}
	while(cumle[i]){
		if(cumle[i]=='.'){
			if(cumle[i+1]>='a'&&cumle[i+1]<='z'){
				sira=(int)cumle[i+1]-(int)'a';
			cumle[i+1]=(char)(alfabe+sira);
				
			}
			else if(cumle[i+1]==' '&&(cumle[i+2]>='a'&&cumle[i+2]<='z')){
				sira=(int)cumle[i+2]-(int)'a';
			cumle[i+2]=(char)(alfabe+sira);
				
			}
			
				
			
			
		}
		i++;
	}
	
	printf("%s",cumle);
}
