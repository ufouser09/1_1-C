#include <stdio.h>
void ussunu_al(int a,int b,int *can){
	int i;
	*can=1;
	for(i=0;i<b;i++){
		*can=*can*a;
		
	}
}
int main(void){
	int x=4,y=5,sonuc;
	ussunu_al(x,y,&sonuc);
	printf("%d",sonuc);
	return 0;
}
//udemy20.32.c
//udemy sayfa 48
//72
