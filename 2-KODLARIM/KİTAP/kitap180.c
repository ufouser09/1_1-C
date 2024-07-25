#include <stdio.h>


int buyuk(int a,int b,int c){
	int max;
	max=(a>b&&a>c ?a:b>c?b:c);
	return max;
}








int main(){
	int a,b,c;
	printf("3 tane sayi giriniz \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("girilen sayilarin en buyugu %d\n",buyuk(a,b,c));
}
//program 12.15
//192
//programa bi da bak
