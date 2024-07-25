#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	//degiskenleri tanýmladýk
	int N,Y;
	int K=0;
	
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
			printf("%4d",A[i][j]);
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
		
			
		
	


	
	
	//matrisi yazdýrdýk 
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			if((i==a&&j==b)||(i==c&&j==d)){
			printf("%d",A[i][j]);
			
		
	}
	else if(A[i][j]==0){
		printf("-");
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
		A[a][b]=0;
		A[c][d]=0;
		printf("puanýnýz:%d\n",kpuan);
	}
	

	
	}while(A[a][b]==A[c][d]);
	
	do{
	
	printf("\n-----------------OYUN SIRASI:BÝLGÝSAYAR-------------\n");
		//hatýrlma matrisi ilk sayi için
		if(K==Y){
		K=0;
		}	
			
		
		B[K][0]=a;
		
		B[K][1]=b;
		
		B[K][2]=A[a][b];
		
		K++;
		//hatýrlama matrisi ikinci sayi için
		if(K==Y){
		K=0;
		}	
		
		B[K][0]=c;
		
		B[K][1]=d;
		
		B[K][2]=A[c][d];
		
		K++;
	
	
	do{
	
	e=(rand()%N)+1;
	f=(rand()%N)+1;
	}while(A[e][f]==0);
	

	
	int counter=0;
	for(i=0;i<Y;i++){
		//son hatýrladýklarýna bakarýz
		
		
		if((B[i][2]==A[e][f])&&((B[i][0]!=e) && (B[i][1]!=f) )){
			counter++;
			l=B[i][0];
			k=B[i][1];
	
		//son hatýrladýklarýnda çýkarsa matrisi yazdýrýrýz
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e&&j==f)||(i==l&&j==k)){
					
					
			printf("%d",A[i][j]);
		
		
	}
	else if(A[i][j]==0){
		printf("-");
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
	//eger esitse bu degerler puan kazanýrýz.
	
		printf("\ntebrikler puan kazandýnýz\n");
		bpuan++;
		A[e][f]=0;
		A[l][k]=0;
		printf("puanýnýz:%d\n",bpuan);
	
			
		}
		}
		//eger hatýrladýklarýnda çýkmazsa buraya gireriz
		if(counter==0){
		do{
		
		l=(rand()%N)+1;
		k=(rand()%N)+1;
		}while(((e==l)&&(f==k))||(A[l][k]==0));
		
		if(A[e][f]==A[l][k]){
			for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e && j==f)||(i==l && j==k)){
			printf("%d",A[i][j]);
			
		
	}
	else if(A[i][j]==0){
		printf("-");
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
	
		printf("\ntebrikler puan kazandýnýz\n");
		bpuan++;
		A[e][f]=0;
		A[l][k]=0;
		printf("puanýnýz:%d\n",bpuan);
	
			
		}
		
	
	
}
if(A[e][f]!=A[l][k]){

//sayilarýmýzý hafýzaya atarýz
if(K==Y){
		K=0;
		
	}
	
		
		B[K][0]=e;
		
		B[K][1]=f;
		
		B[K][2]=A[e][f];
		
	
	
	
	
	if(K==Y){
		K=0;
		
	}

		
		B[K][0]=l;
		
		B[K][1]=k;
		
		B[K][2]=A[l][k];
		
}
		if(A[e][f]!=A[l][k]){
			for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if((i==e&&j==f)||(i==l&&j==k)){
			printf("%d",A[i][j]);
			
		
	}
	else if(A[i][j]==0){
		printf("-");
	}
	else{
			printf("*");
	}
		}
		printf("\n");
	}
		}
		
		
	
	
	
	
	
	
	
	}while(A[e][f]==A[l][k]);
	
	}while((bpuan<=N)&&(kpuan<=N));
	printf("\n-------------------OYUN SONLANDI------------------\n");
	printf("oyunucunun puaný:%d ve bilgisayarin puani:%d\n",kpuan,bpuan);
	if(bpuan>kpuan){
		printf("kazanan bilgisayar\n");
	}
	else{
		printf("kazanan oyuncu\n");
	}
	
	
	return 0;
	}
