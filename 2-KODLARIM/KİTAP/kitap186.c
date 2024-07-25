#include <stdio.h>

int a,b;

int topla(){
	return a+b;
}

int main(){
	int sonuc;
	a=4;
	b=8;
	sonuc=topla();
	printf("%d\n",topla());
}
//program 12.21
//196
