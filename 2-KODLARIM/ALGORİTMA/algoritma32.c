#include <stdio.h>
int main(){
	int N,nn,k,i;
	printf("lutfen dizinin boyutunu giriniz \n");
	scanf("%d",&N);
	
	int A[N];
	nn=N+1;
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		k=A[i];
		if(k%2==0){
			k=nn-(k/2);
			A[i]=k;
		}
		else{
			k=(k+1)/2;
			A[i]=k;
		}
	}
	for(i=0;i<N;i++){
		printf("%d",A[i]);
	}
	
	return 0;
}
//deneme ve compile yapildi
//bir N sayisina g�re 1 3 5..N 6 4 2 sekline getirilmi� diziyi 1 2 ....N(eski haline) haline d�n�st�ren algoritma ve programi.
//sayfa 24
//2.soru
//kod cal�s�yor
