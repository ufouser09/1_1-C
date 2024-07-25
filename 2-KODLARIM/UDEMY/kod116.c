#include <stdio.h>
int faktoriyel(int n){
	int i;
	int sonuc=1;
	for(i=1;i<=n;i++){
		sonuc=sonuc*i;
	}
	return sonuc;
}
int main(void){
	int i;
	for(i=1;i<=10;i++){
		printf("%d!=%d\n",i,faktoriyel(i));
	}
	return 0;
}
//udemy sayfa 87
//udemy32.c
//116
