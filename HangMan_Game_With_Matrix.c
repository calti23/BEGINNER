#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_KELIME_UZUNLUGU 50
#define MAX_ISIM_UZUNLUGU 20
#define MAX_HAK 6

// Global degiskenler
char oyuncu[MAX_ISIM_UZUNLUGU];
char secilenKelime[MAX_KELIME_UZUNLUGU];
char bulunacakKelime[MAX_KELIME_UZUNLUGU];
char kelimeKategorisi[MAX_ISIM_UZUNLUGU];
char hatalar[MAX_HAK + 1];

int yanlis = 0;
int matrix_modu = 0; 

// Fonksiyon prototipleri
void draw_hangman(int hata_sayisi);
void draw_matrix_chase(int hata_sayisi);
void print_spaces(int n); // Bosluk birakma yardimci fonksiyonu

int main()
{
    srand(time(NULL));

    char sporKelimeleri[][20]  = {"futbol", "basketbol", "tenis", "voleybol" , "hentbol", "golf", "jimnastik" , "beyzbol"};
    char sanatKelimeleri[][20] = {"resim", "muzik", "tiyatro", "heykel"};
    char bilimKelimeleri[][20] = {"fizik", "kimya", "biyoloji", "astronomi"};

    int kategoriSecim;
    int kelime_uzunlugu;
    int i;
    char tahmin;
    int kazanma_durumu = 0;

    printf("********** OYUN BASLIYOR **********\n");

    printf("Oyuncunun ismi: ");
    scanf("%19s", oyuncu);

    // --- EASTER EGG KONTROLU ---
    if (strcmp(oyuncu, "Neo") == 0 || strcmp(oyuncu, "neo") == 0) {
        matrix_modu = 1;
        system("color 0A"); 
        printf("\n>>> UYAN NEO... MATRIX SENI ARIYOR. <<<\n");
    }
    // ---------------------------

    printf("\nKategori Seciniz:\n");
    printf("1 - Spor\n");
    printf("2 - Sanat\n");
    printf("3 - Bilim\n");
    printf("Seciminiz: ");
    scanf("%d", &kategoriSecim);

    int index;

    if (kategoriSecim == 1){
        strcpy(kelimeKategorisi, "Spor");
        index = rand() % 8;
        strcpy(secilenKelime, sporKelimeleri[index]);
    }
    else if (kategoriSecim == 2){
        strcpy(kelimeKategorisi, "Sanat");
        index = rand() % 4;
        strcpy(secilenKelime, sanatKelimeleri[index]);
    }
    else if (kategoriSecim == 3){
        strcpy(kelimeKategorisi, "Bilim");
        index = rand() % 4;
        strcpy(secilenKelime, bilimKelimeleri[index]);
    }
    else{
        printf("Gecersiz secim!");
        return 0;
    }

    kelime_uzunlugu = strlen(secilenKelime);

    for (i = 0; i < kelime_uzunlugu; i++){
        secilenKelime[i] = tolower(secilenKelime[i]);
        bulunacakKelime[i] = '_';
    }
    bulunacakKelime[kelime_uzunlugu] = '\0';
    hatalar[0] = '\0';

    do{
        printf("\n============================\n");
        
        if(matrix_modu) {
            printf("[SISTEM]: %s\n", kelimeKategorisi);
            printf("[SIFRE]: %s\n", bulunacakKelime);
            draw_matrix_chase(yanlis);
        } else {
            printf("Kategori: %s\n", kelimeKategorisi);
            printf("Kelime: %s\n", bulunacakKelime);
            draw_hangman(yanlis);
        }

        printf("Kalan Hak: %d\n", MAX_HAK - yanlis);
        printf("Hatalar: %s\n", hatalar);

        printf("%s, bir harf giriniz: ", oyuncu);
        while(getchar() != '\n');
        scanf("%c", &tahmin);
        tahmin = tolower(tahmin);

        int bulundu = 0;

        for (i = 0; i < kelime_uzunlugu; i++){
            if (tahmin == secilenKelime[i] && bulunacakKelime[i] == '_'){
                bulunacakKelime[i] = tahmin;
                bulundu = 1;
            }
        }

        if (!bulundu){
            if (strchr(hatalar, tahmin) == NULL){
                hatalar[strlen(hatalar)] = tahmin;
                hatalar[strlen(hatalar) + 1] = '\0';
                yanlis++;
            }
        }

        if (strcmp(secilenKelime, bulunacakKelime) == 0){
            kazanma_durumu = 1;
            break;
        }

    } while (yanlis < MAX_HAK);

    printf("\n============================\n");
    if (kazanma_durumu){
        if(matrix_modu) {
            printf("\n>>> BASARILI! NEO MATRIX'TEN KACTI. <<<\n");
            printf("Sifre: %s\n", secilenKelime);
        } else {
            draw_hangman(yanlis);
            printf("\nTEBRIKLER %s! Kelimeyi buldun: %s\n", oyuncu, secilenKelime);
        }
    }
    else{
        if(matrix_modu) {
            draw_matrix_chase(MAX_HAK); 
            printf("\n>>> SMITH SENI ELE GECIRDI. MATRIX KAZANDI. <<<\n");
            printf("Sifre: %s\n", secilenKelime);
        } else {
            draw_hangman(MAX_HAK);
            printf("\nKaybettiniz. Dogru Kelime: %s\n", secilenKelime);
        }
    }

    return 0;
}

// Yardimci fonksiyon: N tane bosluk basar
void print_spaces(int n) {
    int k;
    for(k = 0; k < n; k++) printf(" ");
}

// Matrix Modu: COP ADAMLI KOVALAMACA
void draw_matrix_chase(int hata_sayisi)
{
    // Smith'in konumu (Her hatada 6 birim saga kayar)
    int smith_pos = hata_sayisi * 6; 
    
    // Neo'nun konumu (Sabit, en sagda)
    int neo_pos = 45; 
    
    // Aradaki bosluk
    int gap = neo_pos - smith_pos - 3; // -3 Smith'in genisligi
    if (gap < 0) gap = 0;

    printf("\n   [ MATRIX KODU KIRILIYOR... ]\n\n");

    // --- SATIR 1: KAFALAR ---
    print_spaces(smith_pos);
    printf(" O ");           // Smith Kafa
    
    print_spaces(gap);
    
    if (hata_sayisi == MAX_HAK) printf(" X "); // Neo Olu Kafa
    else printf(" O ");        // Neo Canli Kafa
    printf("\n");

    // --- SATIR 2: GOVDELER ---
    print_spaces(smith_pos);
    printf("/|\\-");         // Smith Govde (Elinde silah - var)
    
    print_spaces(gap); 
    
    if (hata_sayisi == MAX_HAK) printf("/|\\"); // Neo Olu Govde
    else printf("~|~");      // Neo (Mermileri durduruyor gibi)
    printf("\n");

    // --- SATIR 3: BACAKLAR ---
    print_spaces(smith_pos);
    printf("/ \\");          // Smith Bacak
    
    print_spaces(gap + 1);   // Hizalama icin ufak ayar
    
    if (hata_sayisi == MAX_HAK) printf("| |"); // Neo Diz cokmus
    else printf("/ \\");      // Neo Ayakta
    printf("\n");

    // Zemin
    printf("____________________________________________________\n");

    // Durum Mesajlari
    if (hata_sayisi == 0) printf(">> Smith ufukta gorundu.\n");
    else if (hata_sayisi < 3) printf(">> Smith hizla yaklasiyor!\n");
    else if (hata_sayisi < 5) printf(">> NISAN ALDI! DIKKAT ET!\n");
    else if (hata_sayisi == 5) printf(">> NAMLU UCUNDASIN NEO!\n");
}

// Klasik Adam Asmaca
void draw_hangman(int hata_sayisi)
{
    printf("\n +---+\n");
    printf(" |   %c\n", (hata_sayisi >= 1 ? 'O' : ' '));
    printf(" |  %c%c%c\n",
           (hata_sayisi >= 3 ? '/' : ' '),
           (hata_sayisi >= 2 ? '|' : ' '),
           (hata_sayisi >= 4 ? '\\' : ' '));
    printf(" |   %c\n", (hata_sayisi >= 2 ? '|' : ' '));
    printf(" |  %c %c\n",
           (hata_sayisi >= 5 ? '/' : ' '),
           (hata_sayisi >= 6 ? '\\' : ' '));
    printf(" |\n");
    printf("===\n");
}
