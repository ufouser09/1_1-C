#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct kayit{

char isim[20];
int hasta;
int vefat;
double oran;
struct kayit  *sonraki;

} kayit;


kayit* olustur(kayit* bir_onceki, char isim[], int hasta, int vefat){ // root u oluştururken NULL ile çağırılır.
									// bir önceki pointer ın sonraki değişkenine atama yapılır.
		
	kayit* yeni = (kayit*) malloc(1*sizeof(kayit));//hafızada yer ayrıldı
	if(yeni == NULL){
		printf("\nMemory is not allocated ");
		return NULL;
	}
	
	strcpy(yeni -> isim, isim);// isim eklendi
	yeni -> hasta = hasta;//hasta sayısı eklendi
	yeni -> vefat = vefat; //vefat sayıs eklendi
	yeni -> sonraki = NULL;	
	if(bir_onceki != NULL){	
		
		bir_onceki -> sonraki = yeni;//bir önceki kayit ın sonraki değişkenine bu oluşturulan node eklendi
	
	}

	return yeni;
	 
}

kayit* kontrol(char isim[], kayit* kok){//girilen isim yeniden girilmiş mi girilmemiş mi ona bakar
			   		// ismi ve kok node u alır varsa o node u döner, yoksa null döner 
	
		
		if(kok -> sonraki == NULL){//pointer null ise 	
			return NULL;			// aynı olan olmadığı için son elemana gelinmiştir null dönderir. 
		}					//en son elemana bakmaz o zaten yeni girilen
		
		if(!strcmp(kok -> isim,isim)){// isim aynıysa strcmp 0 döner, if in içi 1 olur.
								
				return kok;
		}
		
		return kontrol (isim,kok->sonraki);


}

//kullanılmadı
void yenile(kayit* p, int yeni_hasta, int yeni_vefat){//eğer aynı çıkma varsa yeniler
		//parametre olarak değiştirilecek node un pointer ını, yeni hasta sayısını ve yeni vefat sayısını alır. Şimdilik void
	p -> hasta = yeni_hasta;
	p -> vefat = yeni_vefat;
	p -> oran = (double) yeni_vefat / yeni_hasta;

}


kayit* yapiyi_olustur(){// scanf ile değerleri alır yukarıdaki fonksiyonları kullanır, yapıyı bitirir ve kok elemanı döner. eğer ilk son girerse NULL döner

	kayit* root = olustur(NULL,"Bos",0,0);
	scanf("%s",root->isim);//rootun ismini alır
	if(!strcmp(root->isim,"son"))//root da oluşmamışsa NULL döner
		return NULL;
	scanf("%d %d",&(root->hasta),&(root->vefat));
	root -> oran = (double)root->vefat/root->hasta;
	kayit* gezgin = root; // rootu kaybetmemek için başka bir pointer daha oluşturdum
	while(1){
		
		kayit* bir_ileriki = olustur(gezgin,"Bos",0,0); //ilk girişte gezgin root olacak sonra güncellenecek
		//if(bir_ileriki->sonraki == NULL)
		printf("\nUlke bilgilerini giriniz, sonlandırmak için 'son' giriniz:\n");
		scanf("%s",bir_ileriki->isim);
		if(!strcmp(bir_ileriki->isim,"son")){//bir ileriki nin ismi son girildiyse root u döner, o anki kayiti sıfırlar.
			gezgin -> sonraki = NULL;	//olustur un içinde şu anki gezginin sonraki pointer ı bir_ileriki yi gösteriyordu, onu NULL ladık.		
			free(bir_ileriki);
			return root;
		}
		//burada kontrol yapacağız aynı isim varsa o ülkeyi bulacağz
		kayit* tekrar = kontrol(bir_ileriki->isim,root);
		
	
		if(tekrar == NULL){//tekrar null ise daha önce büyle bir isim girilmemiş, normal işleme devam
			scanf("%d %d",&(bir_ileriki->hasta),&(bir_ileriki->vefat));//ülke ismi ise sayı alımına devam eder.
			bir_ileriki->oran =(double)bir_ileriki->vefat/bir_ileriki->hasta;//oranı güncellenir.
			gezgin = bir_ileriki;// gezgin şu anda yeni oluşturulan kayit oldu.
		}

		else{
			scanf("%d %d",&(tekrar->hasta),&(tekrar->vefat));//
			tekrar->oran =(double)tekrar->vefat/tekrar->hasta;//oranı güncellenir.	
			free(bir_ileriki);// bir ileriki kullanılmadı gezgin de aynı kaldı.
		}
	}
	
}
void yapiyi_goster(kayit* kok){
	if(kok == NULL)// gelen işaretçi NULL ise geri döner
		return;
	printf("%s %d %d\n",kok->isim, kok->hasta, kok->vefat);
	yapiyi_goster(kok->sonraki);


}

void enler(kayit* p){//en büyük ve en küçük değerlerin sahiplerini ekrana bastırır.
	kayit* temp_maks_h = p;//bütün geçici değişkenleri kök olarak başlattım
	kayit* temp_min_h = p;
	kayit* temp_maks_v = p;
	kayit* temp_min_v = p;
	kayit* temp_maks_o = p;
	kayit* temp_min_o = p;
	p = p -> sonraki;//kökten sonraki kayit a geçtik.
	while(p != NULL){
		if(p -> hasta > temp_maks_h -> hasta)
			temp_maks_h = p;

		if(p -> hasta < temp_min_h -> hasta)
			temp_min_h = p;

		if(p -> vefat > temp_maks_v -> vefat)
			temp_maks_v = p;

		if(p -> vefat < temp_min_v -> vefat)
			temp_min_v = p;


		if(p -> oran > temp_maks_o -> oran)
			temp_maks_o = p;

		if(p -> oran < temp_min_o -> oran)
			temp_min_o = p;

		p = p -> sonraki;
		
	}
	printf("\nEn cok hastası olan ulke : %s",temp_maks_h -> isim);
	printf("\nEn az hastası olan ulke : %s",temp_min_h -> isim);
	printf("\nEn cok kaybı olan ulke : %s",temp_maks_v -> isim);
	printf("\nEn az kaybı olan ulke : %s",temp_min_v -> isim);
	printf("\nEn cok kayıp oranı olan ulke : %s",temp_maks_o -> isim);
	printf("\nEn az kayıp oranı olan ulke : %s\n",temp_min_o -> isim);

}	


int main() {
	printf("\nUlke bilgilerini giriniz, sonlandırmak için 'son' giriniz:\n");
	kayit* kok = yapiyi_olustur();
	enler(kok);
	//yapiyi_goster(kok);
	return 0;
}
