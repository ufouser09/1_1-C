#include <stdio.h>
//ortalama deger
int main(void){
	int i,N;       //ilk �nce degiskenleri girmisiz.
	int A[100];
	float ort=0.0;
	
	printf("please enter number of elements:");//sonra kac tane sayi girecegimize bakar�z.
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		printf("please enter %d. element  :",i);//burdaki i n sayisina kadar art�yo demek ama i y�zde d nin yerine mi geciyor i neden var.
		
		scanf("%d",&A[i]);
}
for(i=0;i<N;i++){
	ort += A[i];//burdaki i�aretin anlam� +=
	
}

ort /=N;//burdaki isaretin anlam� /=

printf("average value of the elements is %f\n",ort);

return 0;
}
//deneme ve compile yapildi 1

