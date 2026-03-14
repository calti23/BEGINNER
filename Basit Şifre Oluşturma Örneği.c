#include <stdio.h>

int sayisalDeger(long sayi){
	if (sayi < 10 && sayi >= 0){
		if ((sayi % 2) == 0){
			return (sayi * sayi);
		}
		else {
			return (sayi * sayi * sayi);
		}
	}
	if ((sayi % 10) % 2 == 0){
		return sayisalDeger(sayi / 10) + ((sayi % 10) * (sayi % 10));
	}
	if ((sayi % 10) % 2 != 0){
		return sayisalDeger(sayi / 10) + ((sayi % 10) * (sayi % 10) * (sayi % 10));
	}
}
int enBuyukBasamak(long sayi){
	int max;
	int son;
	if (sayi < 10 && sayi >= 0){
		return sayi;
	}
	max = enBuyukBasamak(sayi / 10);
	son = sayi % 10;
	if (max > son){
		return max;
	}
	else{
		return son;
	}
}
void sifreUret(char isim[5],char soyisim[5],long ogrNo){
	
	printf("LUTFEN ISMINIZI GIRINIZ:");
	scanf("%s",isim);
	char isminIlkHarfi = isim[0];
	
	printf("LUTFEN SOYISMINIZI GIRINIZ:");
	scanf("%s",soyisim);
	char soyisimSonHarfi = soyisim[4];
	
	printf("LUTFEN OGRENCI NUMARANIZI GIRINIZ:");
	scanf("%ld",&ogrNo);
	
	printf("SIFRE OLUSTURULDU!!!YENI SIFRENIZ:%c%c%d%d\n",isminIlkHarfi,soyisimSonHarfi,sayisalDeger(ogrNo),enBuyukBasamak(ogrNo));

	printf("ISIM:%s\n",isim);
	printf("SOYISIM:%s\n",soyisim);
	printf("OGRENCI NO:%ld\n",ogrNo);
	printf("OLUSTURULAN SIFRE:%c%c%d%d",isminIlkHarfi,soyisimSonHarfi,sayisalDeger(ogrNo),enBuyukBasamak(ogrNo));
	
}
int main(){
	char isim [5];
	char soyisim [5];
	long ogrNo;
	sifreUret(isim,soyisim,ogrNo);
	
	return 0;
}
//HOCAM BU ORNEKTE DONGU KULLANMAMAMIZ GEREKTIGI ICIN VE STRLEN FONKSIYONU KULLANMAK ISTEMEDIGIM ICIN VE KENDI ISMIMLE DE DENENECEGI ICIN ISIM VE SOYISIM UZUNLUGUNU 5 KARAKTER KABUL ETTIM YAPAY ZEKADAN CEKMEDEN KENDIM YAPMAYA OZEN GOSTERDIM

