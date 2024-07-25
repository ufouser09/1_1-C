#include <stdio.h>
int main(){
	int i;
	for(i=0;i<10;i++){
		if(i==1){
			continue;
		}
		if(i==8){
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
//udemy sayfa 36
//udemy 20.15.c
//55
