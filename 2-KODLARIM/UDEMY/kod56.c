#include <stdio.h>
int main(){
	int sonuc;
	char[15]="abcdef";
	char[15]="ABCDEF";
	
	sonuc=strncmp(can,canan,4);
	
	if(sonuc<0){
		printf("can canandan daha kucuktur");
	}
	else if(sonuc>0){
		printf("can canandan daha buyuktur");
	}
	else{
		printf("ikiside birbirine esittir");
	}
	return 0;
}
//programa bi da bak 
//udemy sayfa 37
//udemy 20.16.c
//56
