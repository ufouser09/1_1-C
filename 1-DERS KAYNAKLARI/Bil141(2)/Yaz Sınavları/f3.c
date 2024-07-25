struct Order {
	int adet;
	float fiyat;
	union {
		struct {
			char malzeme[10];
			char ulke[10];
		} yiyecek;	
		struct {
			float miktar;
			int kalori;
		} icecek;
	} item;
};



