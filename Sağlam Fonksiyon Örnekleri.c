#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int asalMi(int sayi){
	int i;
	bool asal = 1;
	system ("COLOR 6");
	
	for (i = 2; i < sayi ;i++){
		if(sayi % i != 0){
			continue;
		}
		else {
			asal = 0;
			break;
		}
		
	}
	if (asal == 1){
		printf("SAYI ASALDIR");
	}
	else {
		printf("SAYI ASAL DEGILDIR");
	}
	return sayi;
}
int mukemmelMi(int sayi){
	int i;
	int toplam = 0;
	system ("COLOR 9");
	
	for (i = 1 ; i < sayi ; i++){
		if (sayi % i == 0){
			toplam += i;
		}
	}
	if (toplam == sayi){
		printf ("SAYI MUKEMMEL SAYIDIR");
	}
	else {
		printf("SAYI MUKEMMEL DEGILDIR");
	}
	return sayi;
}
int armstrongMu(int sayi){
	int toplam = 0;
	int basamak;
	int orijinal = sayi;
	system("COLOR A");
	
	while (sayi != 0){
		basamak = sayi % 10;
		toplam += basamak * basamak * basamak;
		sayi /= 10;
	}
	if(toplam == orijinal){
		printf ("SAYI ARMSTRONG SAYIDIR");
	}
	else {
		printf("SAYI ARMSTRONG SAYISI DEGILDIR");
	}
	return sayi;
}
int palindromMu(int sayi){
	int gecici = sayi ,ters = 0,basamak1ler;
	system ("COLOR E");
	
	while(gecici != 0){
		basamak1ler = gecici % 10;
		ters = ters * 10 + basamak1ler;
		gecici /= 10;
	}
	if (ters == sayi){
		printf ("SAYI PALINDROMDUR");
	}
	else {
		printf("SAYI PALINDROM DEGILDIR");
	}
	return sayi;
}
int basamakSayisi(int sayi){
	int basamak_sayisi = 1;
	system("COLOR 5");
	
	 while(sayi != 0){
	 	sayi /= 10;
	 	basamak_sayisi ++;
	 	if (sayi < 10){
	 		break;
		 }
	 }
	 if (sayi < 10){
	 	printf("BASAMAK SAYISI:%d",basamak_sayisi - 1);
	 }
	 else{
	 printf("BASAMAK SAYISI:%d",basamak_sayisi);
	}
	 return sayi;
}
int basamaktoplami(int sayi){
	int toplam = 0;
	system ("COLOR C");
	
	while (sayi != 0){
		toplam += (sayi % 10);
		sayi /= 10;
	}
	printf("BASAMAKLAR TOPLAMI:%d" , toplam);
	return sayi;
}
int tersCevir(int sayi){
	int gecici = sayi;
	int ters = 0,basamak1ler;
	system ("COLOR 7");
	
	while (gecici != 0){
		basamak1ler = gecici % 10;
		ters = ters * 10 + basamak1ler;
		gecici /= 10;
	}
	printf("SAYININ TERSI:%d" , ters);
	return sayi;
}
int gucluMu(int sayi){
	int orijinal = sayi;
	int sonuc;
	int toplam = 0;
	int i,basamak;
	system("COLOR B");
	
	while (orijinal != 0){
		basamak = orijinal % 10;
		sonuc = 1;
		for (i = 1 ; i <= basamak ; i++){
			sonuc *= i;
		}
		toplam += sonuc;
		orijinal /= 10;
	}
	if (toplam == sayi){
		printf("SAYI GUCLU SAYIDIR");
	}
	else{
		printf("SAYI GUCLU DEGILDIR");
	}
	return sayi;
}
void harshadMi(int sayi){
	int orijinal = sayi;
	int sonuc = 0;
	system("COLOR 1");
	
	while(orijinal != 0){
		sonuc += orijinal % 10;
		orijinal /= 10;
	}
	if (sayi % sonuc == 0){
		printf("SAYI HARSHAD-NIVEN SAYISIDIR");
	}
	else{
		printf("SAYI HARSHAD-NIVEN SAYISI DEGILDIR");
	}
}
int ikilikTaban(int sayi){
	long ikilik = 0;
	int i = 1; 
	int kalan;
	int orijinal = sayi;
	system ("COLOR 3");
	
	while(orijinal != 0){
		kalan = orijinal % 2;
		orijinal /= 2;
		ikilik += kalan * i;
		i *= 10;
	}
	printf ("%d SAYISININ IKILIK KARISLIGI:%ld",sayi,ikilik);
	return sayi;
}
int main (){
	int deger1,deger2,deger3,deger4,deger5,deger6,deger7,deger8,deger9,deger10;
	
	do {
		printf ("LUTFEN ILK DEGERI ASAL KONTROLU ICIN GIRINIZ:");
		scanf("%d" , &deger1);
		if(deger1 <= 1){
			printf("GECERSIZ BIR DEGER GIRDINIZ!!!");
			printf("\n");
		}
	}while (deger1 <= 1);
	asalMi(deger1);
	printf("\n");
	
	printf ("MUKEMMEL SAYI KONTROLU ICIN IKINCI DEGERI GIRINIZ:");
	scanf("%d" , &deger2);
	mukemmelMi(deger2);
	printf("\n");
	
	printf("ARMSTRONG SAYI KONTROLU ICIN BIR SAYI GIRINIZ:");
	scanf("%d" , &deger3);
	armstrongMu(deger3);
	printf("\n");
	
	printf ("PALINDROM SAYI KONTROLU ICIN BIR DEGER GIRINIZ:");
	scanf("%d" , &deger4);
	if (deger4 < 0){
		deger4 *= (-1);
	}
	palindromMu(deger4);
	printf("\n");
	
	printf("BASAMAK SAYISI KONTROLU ICIN BIR DEGER GIRINIZ:");
	scanf("%d" , &deger5);
	if (deger5 < 0){
		deger5 *= (-1);
	}
	basamakSayisi(deger5);
	printf("\n");
	
	printf("BASAMAKLAR TOPLAMI ICIN BIR SAYI GIRINIZ:");
	scanf("%d" , &deger6);
	if(deger6 < 0){
		deger6 *= (-1);
	}
	basamaktoplami(deger6);
	printf("\n");
	
	printf("TERSI BULUNACAK SAYIYI GIRINIZ:");
	scanf("%d" , &deger7);
	if (deger7 < 0){
		deger7 *= (-1);
	}
	tersCevir(deger7);
	printf("\n");
	
	printf ("GUCLU SAYI KONTROLU ICIN SAYI GIRINIZ:");
	scanf("%d" , &deger8);
	if (deger8 < 0){
		deger8 *= (-1);
	}
	gucluMu(deger8);
	printf("\n");
	
	printf("HARSHAD-NIVEN KONTROLU ICIN BIR DEGER GIRINIZ:");
	scanf("%d" , &deger9);
	if (deger9 < 0){
		deger9 *= (-1);
	}
	harshadMi(deger9);
	printf("\n");
	
	printf("IKILIGE CEVRILECEK SAYIYI GIRINIZ:");
	scanf("%d" , &deger10);
	if (deger10 < 0){
		deger10 *= (-1);
	}
	ikilikTaban(deger10);
	printf("\n");
	
	return 0;
}
