#include <stdio.h>

void ucgen(int n){
	int i,j;
	int bosluksayisi=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=bosluksayisi;j++){
			printf(" ");
		}
		bosluksayisi--;
		for(j=1;j<=2*i-1;j++){
			printf("%c");
		}
		printf("\n");
	}
}
void ucgenplus(int n){
	int bosluksayisi=1;
	int i,j;
	for(i=1;i<=n;i++){
		printf("\n");
	}
}
//bu programa bi da bak
//udemy 97.ders
//udemy41.c
//125
//asagýda verilen ekran görüntüsünün elde edilmesini saglayan c programini fonksiyon kullanarak yaziniz

//satir sayisini giriniz
/*   c
    ccc
   ccccc
  ccccccc  
   +++++
    +++
     + */
     

    
