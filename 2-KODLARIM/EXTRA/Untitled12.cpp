#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	
	int N,M,i,j,x,y,z;
	int satirx,satiry,satirz,sutunx,sutuny,sutunz;
	
	printf("lutfen matrisin boyutlarýný giriniz\n");
	scanf("%d %d",&N,&M);
	
	int K[N][M];
	
	srand(time(NULL));
	

	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			K[i][j]=rand() % 9;
		}
		printf("\n");
	}
	printf("girdiginiz matris\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%d",K[i][j]);
			
		}
		printf("\n");
	}
	
	
	printf("lutfen 3 tane sayi giriniz\n");
	scanf("%d %d %d",&x,&y,&z);
	
	int counter=0;
	int a=0;
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			
			
			if(x==K[i][j] && (counter==0)){
				counter++;
				a++;
				satirx=i;
				sutunx=j;
		}
		else if((y==K[i][j])&&(counter==1)){
					counter++;
					a++;
					satiry=i;
					sutuny=j;
			}
				else if(z==K[i][j]&&(counter==2)){
					a++;
					if(a==3){
						satirz=i;
						sutunz=j;
						
					
					printf("sayi bulundu");
					
					printf("x'in satiri=%d sutunu =%d y'nin satiri=%d sutunu=%d z'nin satiri=%d sutunu=%d",satirx,sutunx,satiry,sutuny,satirz,sutunz);
					
			}
				}
				else if(K[i][j]!=x&&K[i][j]!=y&&K[i][j]!=z){
					a=0;
					counter=0;
				}
			}
		}
	}
