#include <stdio.h>
int main(){
	int i,n;
	float x,seri;
	
	printf("pozitif sayi giriniz:\n");
	scanf("%d",&n);
	printf("reel sayi :");
	scanf("%f",&x);
	
	for(i=1;i<=2*n-1;i+=2){
		seri +=i/pow(x,i+1);
	}
	printf("seri=%f",seri);
	return 0;
}
//udemy sayfa 72
//udemy20.64.c
//104
