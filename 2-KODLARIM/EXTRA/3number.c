#include <stdio.h>
int main(){
	
	int N,M,i,j,x,y,z;
	
	printf("lutfen matrisin boyutlarýný giriniz\n");
	scanf("%d %d",&N,&M);
	
	int A[N][M];
	
	printf("lutfen matrisi giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("matris[%d][%d]",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	printf("girdiginiz matris\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%d",A[i][j]);
			
		}
		printf("\n");
	}
	
	
	printf("lutfen 3 tane sayi giriniz\n");
	scanf("%d %d %d",&x,&y,&z);
	
	int counter=0;
	int a=0;
	int b=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			a++;
			b++;
			if(x==A[i][j] && (counter==0)){
				counter++;
				a++;
		}
			
			if((y==A[i][j])&&(counter==1)){
					counter++;
					a++;
				}
				
				if(z==A[i][j]&&(counter==2)){
					a++;
					if(a-b==3){
					
					printf("sayi bulundu");
			}
				}
			}
		}
	}


