#include <stdio.h>
int main(){
	int N,top,i,b,k,ort;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	top=0;
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		top=top+A[i];
	}
	ort=top/N;
	b=0;
	k=0;
	for(i=0;i<N;i++){
		if(A[i]>ort){
			b=b+1;
		}
		else if(A[i]<ort){
			k=k+1;
		}
	}
	printf("%d %d",b,k);
	return 0;
}




//deneme ve compile yapildi
//bir dizinin elemanlarinin ortalama degerini,ortalamadan b�y�k ve k�c�k eleman sayisini bulan algoritma ve programi.
//sayfa 20
//2.soru
//kod cal�s�yor
