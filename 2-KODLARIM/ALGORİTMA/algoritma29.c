#include <stdio.h>
int main(){
	int N,i,j,s;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	//dizimizi kullan�c�dan al�r�z
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	i=0;
	j=N-1;
	//i baslang�c say�m�z� j ise son indisimizi temsil eder ve biz bunu b�t�n diziyi taramak i�in kullan�r�z
	while(i<j){
		//sayimizin tek olup olmad�g�n�n kontrolu
		while(i<j && A[i]%2==1){
			i=i+1;
		}
		while(j>i && A[j]%2==0){
			j=j-1;
		}
		s=A[i];
		A[i]=A[j];
		A[j]=s;
		i=i+1;
		j=j-1;
	}
	for(i=0;i<N;i++){
		printf("%d",A[i]);
	}
	return 0;	
}
//kod cal�s�yor
//ayni dizi i�inde tekler basa,ciftler sonra gelecek sekilde dizi elemanlarini yerlestiren algoritma ve programi.
//sayfa 22
//1.soru


