#include <stdio.h>
#define tam 150
int main(){
	int no,boy,fark,minboy,minno;
	printf("ögrenci no: \n");
	scanf("%d",&no);
	printf("ogrenci boy: \n");
	scanf("%d",&boy);
	
	minno=no;
	fark=abs(boy-tam);
	
	while(no>0){
		printf("ogrenci no: \n");
		scanf("%d",&no);
		printf("ogrenci boy:  \n");
		scanf("%d",&boy);
		
		if(abs(boy-tam)<fark){
			fark=abs(boy-tam);
			minno=no;
			minboy=boy;
		}
	}
	printf("%d numarali ogrenci %d cm boyuyla %d cm e en yakindir",minno,minboy,tam);
	
	return 0;
}
//udemy sayfa 74
//udemy 21.c
//105
