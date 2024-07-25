#include <stdio.h>
int main(){
	int N;
	int M;
	int counter,i,j;
	printf("lutfen matrisin satir sayisini giriniz\n");
	scanf("%d",&N);
	
	printf("lutfen matrisin sutun sayisini giriniz\n");
	scanf("%d",&M);
	
	int A[N][M];
	
	printf("lutfen matrisi giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("matris[%d][%d]:",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	printf("girilen matrisimiz\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%4d",A[i][j]);
		}
		printf("\n");
	}
	counter=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
		
		if(A[i][j]==1){
			counter++;
		}
	}
	if(counter==0){
		printf("bosluklarýn oldugu satýrlar:%d\n",i+1);
		
	}
	counter=0;
}
	
	
	return 0;
}
