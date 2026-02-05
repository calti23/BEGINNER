# READMEFORHANGMAN

## Açıklama
Bu proje, basit bir Hangman (Adam Asmaca) oyununu içerir. Konsolda çalışan öğretici düzeyde bir uygulamadır ve dosyanın diline göre (ör. Python veya Node.js) çalıştırılabilir.

## Özellikler
- Kelime tabanlı oyun mantığı
- Tahmin hakları ve yanlış tahmin sayısı gösterimi
- Oyun kazanç / kayıp durumları
- (Opsiyonel) Kategori desteği

## Gereksinimler
- Python 3.8+ veya Node.js 14+ (hangman dosyasının yazıldığı dile göre)

## Kurulum
1. Depoyu klonlayın:
   git clone https://github.com/calti23/beginner.git
2. Proje dizinine girin:
   cd beginner
3. (Python için) Sanal ortam oluşturup bağımlılıkları yükleyin:
   python -m venv venv
   source venv/bin/activate  # Windows: venv\Scripts\activate
   pip install -r requirements.txt

   (Node.js için) Bağımlılıkları yükleyin:
   npm install

## Çalıştırma
- Eğer hangman Python ile yazıldıysa:
  python hangman.py

- Eğer Node.js ile yazıldıysa:
  node hangman.js
  veya
  npm start

README içindeki çalıştırma komutlarını, hangman dosyasının gerçek adını gördüğümde kesinleştirebilirim.

## Kullanım
- Program çalıştığında gizli bir kelime seçilir.
- Harf tahminleri girilir (tek karakter).
- Yanlış tahminler sınırlıdır; tüm haklar bittiğinde oyun kaybedilir.
- Tüm harfler doğru tahmin edildiğinde oyun kazanılır.

## Yapılandırma
- Kelime listesi dosyası: words.txt (varsa)
- Maksimum yanlış tahmin: 6 (isteğe göre değiştirilebilir)

## Testler
- Python: pytest veya python -m unittest
- Node: npm test

## Katkı
- Hatalar, öneriler veya yeni özellikler için issue açabilirsiniz.
- Pull request'ler hoş karşılanır; lütfen açıklayıcı küçük değişiklikler gönderin.

## Lisans
- Bu projenin lisans bilgisini buraya ekleyin (ör. MIT).

## İletişim
- Sahip: calti23