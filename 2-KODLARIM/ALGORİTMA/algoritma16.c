#include <stdio.h>
int main(){
	int N,bas=0,i;
	
	printf("lutfen dizinin boyutunu giriniz \n");
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		if(A[i]>=50){
			bas=bas+1;
		}
	}
	printf("%d kisilik sinifin %d si basarilidir \n",N,bas);
	return 0;
}






//deneme ve compile yapildi
//bir siniftaki 50 �grencinin bir dersten aldiklari y�l sonu notlari veriliyor.basari notu 50 olduguna g�re kac �grencinin basarili oldugunu bulan algoritma ve programi.
//sayfa 14
//kod cal�s�yor
