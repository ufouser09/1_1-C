#include <stdio.h>
int main(){
	int mat[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			if(i==j){
				mat[i][j]=1;
			}
			else{
				mat[i][j]=0;
			}
		}
	}
			for(i=0;i<10;i++){
				for(j=0;j<10;j++){
					printf("%.4d",mat[i][j]);
					
				}
				printf("\n");
			}
			return 0;

}
//21.satýra ve programýn cýktýsýna tekrar bak
//udemy20.2
//udemy sayfa 28
//42
