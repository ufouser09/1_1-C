#include <stdio.h>

int islemSor(int);
void yeni(int []);
void listele(int []);
void guncelle(int []);
void sil(int []);
void siraSorgula(int []);

int capacity, count = 0;

int main() {
	printf("kac adet ogrenci kaydetmek istiyorsunuz?\n");
	scanf("%d", &capacity);
	
	while(capacity < 1) {
		printf("gecerli bir sayi giriniz!\n");
		scanf("%d", &capacity);
	}
	
	int ogrenciler[capacity];
	int i;
	for (i = 0; i < capacity; i++) {
		ogrenciler[i] = -1;
	}
	
	int islem = islemSor(0);
	while (islem < 1 || islem > 6) {
		islem = islemSor(1);
	}
	
	while (islem != 6) {
		switch(islem) {
			case 1:
				yeni(ogrenciler);
				break;
			case 2:
				listele(ogrenciler);
				break;
			case 3:
				guncelle(ogrenciler);
				break;
			case 4:
				sil(ogrenciler);
				break;
			case 5:
				siraSorgula(ogrenciler);
				break;
		}
		islem = islemSor(0);	
		while (islem < 1 || islem > 6) {
			islem = islemSor(1);
		}
	}
	printf("program sonlanmistir.");
	return 0;
}

void yeni(int ogrenciler[]) {
	if (count == capacity) {
		printf("Ogrenci listesi doludur, yeni kayit girilemez.\n");
	} else {
		int no;
		printf("ogrenci no giriniz:\n");
		scanf("%d", &no);
		ogrenciler[count] = no;
		count++;
		printf("Ogrenci no kaydedildi.\n");
		listele(ogrenciler);
	}
}

void listele(int ogrenciler[]) {
	if (count == 0)
		printf("listele kayit yoktur.\n");
	else {
		printf("kayitli ogrenciler:\n");
		int i;
		for (i = 0; i < count; i++) {
			printf("%d-%d\n", i+1, ogrenciler[i]);
		}
	}
}

void guncelle(int ogrenciler[]) {
	if (count == 0)
		printf("listele kayit yoktur.\n");
	else {
		int sira;
		printf("hangi siradaki ogrenciyi guncellemek istiyorsunuz?\n");
		scanf("%d", &sira);
		/*burada while ile dogru sira girene kadar sormak yerine if ile kontrol edilip, geçerli sira girilmemisse tekrar secim menusune de donulebilir.*/
		while(sira < 1 || sira > count) {
			printf("hatali sira girdiniz!\nListede %d ogrenci vardir.\nTekrar sira giriniz:\n", count);
			scanf("%d", &sira);
		}
		int no;
		printf("%d. siradaki ogrencinin yeni numarasini giriniz:\n", sira);
		scanf("%d", &no);
		ogrenciler[sira-1] = no;
		printf("Kayit guncellendi.\n");
		listele(ogrenciler);
	}
}

void sil(int ogrenciler[]) {
	if (count == 0)
		printf("listele kayit yoktur.\n");
	else {
		int sira;
		printf("hangi siradaki ogrenciyi silmek istiyorsunuz?\n");
		scanf("%d", &sira);
		/*burada while ile dogru sira girene kadar sormak yerine if ile kontrol edilip, geçerli sira girilmemisse tekrar secim menusune de donulebilir.*/
		while(sira < 1 || sira > count) {
			printf("hatali sira girdiniz!\nListede %d ogrenci vardir.\nTekrar sira giriniz:\n", count);
			scanf("%d", &sira);
		}
		int i;
		for (i = sira - 1; i < count; i++) {
			ogrenciler[i] = ogrenciler[i+1];
		}
		ogrenciler[count-1] = -1;
		count--;
		printf("Kayit silindi.\n");
		listele(ogrenciler);
	}
}

void siraSorgula(int ogrenciler[]) {
	if (count == 0)
		printf("listele kayit yoktur.\n");
	else {
		int no;
		printf("Sorgulama istediginiz ogrenci numarasini giriniz:\n");
		scanf("%d", &no);
		
		int i, sira = -1;
		for (i = 0; i < count; i++) {
			if (no == ogrenciler[i]) {
				sira = i+1;
				break;
			}
		}
		if (sira != -1) {
			printf("%d numarasi %d. sirada kayitlidir.\n", no, sira);
		} else {
			printf("%d numarasi kayitli degildir.\n", no);
		}
	}
}

int islemSor(int hata) {
	if (hata) {
		printf("hatali giris yaptiniz.\n");
	}
	printf("yapmak istediginiz islemi seciniz:\n" "1- Yeni ogrenci girisi\n" "2- Ogrencileri listele\n"
		   "3- Guncelle\n" "4- Sil\n" "5- Sira Sorgula\n" "6- Cikis\n");
	int islem;
	scanf("%d", &islem);
	return islem;
}

