#include <stdio.h>

int main(){
	int i,j;
	for(i=2;i<100;i++){
		for(j=2;j<=(i/j);j++){
			if(!(i%j)){
				break;
			}
			else if(j>(i/j)){
				printf("%d sayisi asaldir \n",i);
			}
		}
	}
}
//program 11.2
//144
//bu kodda sorun var tekrar bak
