#include <stdio.h>
#include <stdlib.h>
void tutulanSayiyiBul(void){
	
	int alt_sinir = 0;
	int ust_sinir = 100;
	char durum = ' ';
	int tahmin;
	
	while (durum != 'E' && durum != 'e'){
		
		tahmin = (alt_sinir + ust_sinir) / 2;
		
		printf("SIMDI AKLINDAKI SAYIYI BULMAYA CALISACAGIM...BU SAYI 1-100 ARASINDA OLACAK TABI KI\n");
		printf("BASLIYORUM...SAYI %d MI?\n",tahmin);
		scanf(" %c",&durum);
		
		if (durum == 'K' || durum == 'k'){
			ust_sinir = tahmin - 1;
		}
		else if (durum == 'B' || durum == 'b'){
			alt_sinir = tahmin + 1;
		}
	}
	printf("BULDUM!!!TUTTUGUN SAYI %d\n",tahmin);
}
int main (){
	int sonuc = 0,artis,cpu_artis,baslangic = 1;
	system ("COLOR D");
	
	printf("100 E TAMAMLAMA OYNUYORUZ VE BENI YENEMEYECEKSIN!!!\n");
	printf("SADECE 1 VE 10 ARALIGI KADAR SAYIYI ARTIRABILIRSIN\n");
	printf("HAZIRSAN BASLIYORUM\n");
	printf("BEN %d KADAR ARTIRDIM\n",baslangic);
	sonuc += baslangic;
	printf("ARA TOPLAM:%d\n",sonuc);
	
	while (sonuc < 100){
		do{
		printf("SIRA SENDE OYUNCU...ARTIS MIKTARINI GIR:");
		scanf("%d",&artis);
		}while(artis < 1 || artis > 10);
		printf("%d KADAR ARTIRDIN VE ARA TOPLAM %d OLDU\n",artis,sonuc + artis);
		sonuc += artis;
		cpu_artis = 11 - artis;
		printf("SIRA YINE BENDE VE BEN %d KADAR ARTIRIYORUM\n",cpu_artis);
		sonuc += cpu_artis;
		printf("ARA TOPLAM:%d\n",sonuc);
	}
	printf("KAYBEDECEGINI SANA SOYLEMISTIM :)\n");
	
	tutulanSayiyiBul();
	return 0;
}
