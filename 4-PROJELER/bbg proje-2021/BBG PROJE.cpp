#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	//degiskenleri tanýmladýk
	int N,Y;
	int K=0;
	int L=0;
	int x,i,j;
	int a,b,c,d;
	int E,F,G,H;
	int kpuan=0;
	int bpuan=0;
	int e,f,l,k;
	srand(time(NULL));
	
	//zorluk seviyesini sectik
	printf("lutfen zorluk derecesini giriniz\n");
	printf("kolay icin 1 e orta icin 2 ye zor icin 3 e basiniz");
	scanf("%d",&x);
	if(x==1){
		N=4;
		Y=2;
	}
	else if(x==2){
		N=6;
		Y=6;
	}
	else{
		N=8;
		Y=16;
	}
	int A[N][N];
	int B[Y][3];
	
	
	
	
	//hatýrlamak için kullandýgým matrisi sýfýrladýk
	for(i=0;i<Y;i++){
		for(j=0;j<3;j++){
			B[i][j]=0;
		}
	}
	
	
	
	//matrisi kullanýcýdan aldýk
	printf("dizimizi giriniz\n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			printf("A[%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	
	//kullanýcýdan aldýgýmýz matrisi yazdýrdýk ekrana
	printf("\n--------DÝZÝMÝZ-------\n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	
	do{
	do{
	
	printf("\n---------------OYUN SIRASI:OYUNCU--------\n");
	//birinci kartýn satýr ve sutun degerlerini girdik
	printf("lutfen birinci kartýnýzý seçiniz\n");
	scanf("%d %d",&a,&b);
	
	//ikinci kartýn satýr ve sutun degerlerini girdik
	printf("lutfen ikinci kartýnýzý seciniz\n");
	scanf("%d %d",&c,&d);
	
    
	
	
		//oyunucunun kartlarý esit degilse hatýrlama kýsmýna girdik
		if(A[a][b]!=A[c][d]){
			
		
		//hatýrlma matrisi ilk sayi için
		if(K==Y){
		K=0;
		}	
			
		
		B[K][L]=a;
		B[K][L+1]=b;
		B[K][L+2]=A[a][b];
		
		K++;
		//hatýrlama matrisi ikinci sayi için
		if(K==Y){
		K=0;
		}	
		
		B[K][L]=c;
		B[K][L+1]=d;
		B[K][L+2]=A[c][d];
		
		K++;

}
	
	
	//matrisi yazdýrdýk 
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			if((i==a&&j==b)||(i==c&&j==d)){
			printf("%d",A[i][j]);
			
		
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
	if(A[a][b]==A[c][d]){
		printf("tebrikler puan kazandýnýz\n");
		kpuan++;
		A[a][b]='-';
		A[c][d]='-';
	}
	

	
	}while(A[a][b]==A[c][d]);
	
	do{
	
	printf("\n-----------------OYUN SIRASI:BÝLGÝSAYAR-------------\n");
	
	
	e=(rand()%N)+1;
	f=(rand()%N)+1;
	
	

	
	int counter=0;
	for(i=0;i<Y;i++){
		//son hatýrladýklarýna bakarýz
		if(B[i][L+2]==A[e][f]){
			counter++;
			l=B[i][L];
			k=B[i][L+1];
	
		//son hatýrladýklarýnda çýkarsa matrisi yazdýrýrýz
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e&&j==f)||(i==l&&j==k)){
			printf("%d",A[i][j]);
			
		
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
	//eger esitse bu degerler puan kazanýrýz.
	if(A[e][f]==A[l][k]){
		printf("\ntebrikler puan kazandýnýz\n");
		bpuan++;
		A[e][f]='-';
		A[l][k]='-';
	}
			
		}
		}
		//eger hatýrladýklarýnda çýkmazsa buraya gireriz
		if(counter==0){
		l=(rand()%N)+1;
		k=(rand()%N)+1;
		
		if(A[e][f]==A[l][k]){
			for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e && j==f)||(i==l && j==k)){
			printf("%d",A[i][j]);
			
		
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
	if(A[e][f]=A[l][k]){
		printf("\ntebrikler puan kazandýnýz\n");
		bpuan++;
		A[e][f]='-';
		A[l][k]='-';
	}
			
		}
		else {
			//hatýrladýklarýnda cýkýp cýkmadýgýna bakarýz
			for(i=0;i<Y;i++){
		if(B[i][L+2]==A[l][k]){
			l=B[i][L];
			k=B[i][L+1];
		
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e && j==f)||(i==l && j==k)){
			printf("%d",A[i][j]);
			
		
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
	//hatýrladýklarýnda çýkarsa puan kazanýrýz.
	if(A[e][f]=A[l][k]){
		printf("\ntebrikler puan kazandýnýz\n");
		bpuan++;
		A[e][f]='-';
		A[l][k]='-';
	}
		
		
			
		}
		}
			
		}
		
	
	
}
//sayilarýmýzý hafýzaya atarýz
if(K==Y){
		K=0;
		
	}
	
		
		B[K][L]=e;
		B[K][L+1]=f;
		B[K][L+2]=A[e][f];
		K++;
	
	
	
	
	if(K==Y){
		K=0;
		
	}

	
		B[K][L]=l;
		B[K][L+1]=k;
		B[K][L+2]=A[l][k];
		K++;
		
		if(A[e][f]!=A[l][k]){
			for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e&&j==f)||(i==l&&j==k)){
			printf("%d",A[i][j]);
			
		
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
		}
		
		
	
	
	
	
	
	
	
	}while(A[e][f]==A[l][k]);
	
	}while((bpuan!=N/2+1)||kpuan!=N/2+1);
	return 0;
	}
