#include <stdio.h>
int main(){
	int sonuc;
	char can[15]="abcdef";
	char canan[15]="ABCDEF";
	
	
	sonuc=strcmp(can,canan);
	if(sonuc<0){
		printf("can canandan daha kucuktur");
	}
	else if(sonuc>0){
		printf("can canandan daha buyuktur");
	}
	else{
		printf("ikisi de birbirine eþittir");
	}
	return 0;
}
//udemy sayfa 33
//udemy 20.9.c
//49
//programa bi da bak 
