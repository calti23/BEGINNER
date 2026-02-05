# READMEFORSAVETHEBAKERY

## Açıklama
"Save The Bakery" küçük bir oyun projesidir. Oyuncunun amacı fırını kurtarmak, siparişleri zamanında tamamlamak ve müşterileri memnun etmektir. Oyun konsol veya basit GUI ile çalışıyor olabilir; dosyanın diline göre çalıştırma talimatları aşağıdadır.

## Özellikler
- Sipariş yönetimi (müşteri -> ürün listesi -> süre)
- Zaman sınırlı görevler ve puanlama
- Seviye/çoklu aşama desteği
- Basit envanter ve tarifi takip etme
- (Opsiyonel) Ses ve görsel öğeler (GUI versiyonunda)

## Gereksinimler
- Python 3.8+ veya Node.js 14+ (oyunun yazıldığı dile göre)
- GUI kullanılıyorsa ek paketler (ör. tkinter, pygame, electron vb.)

## Kurulum
1. Depoyu klonlayın:
   git clone https://github.com/calti23/beginner.git
2. Proje dizinine girin:
   cd beginner
3. (Python için) Sanal ortam oluşturup bağımlılıkları yükleyin:
   python -m venv venv
   source venv/bin/activate  # Windows: venv\\Scripts\\activate
   pip install -r requirements.txt

   (Node.js için) Bağımlılıkları yükleyin:
   npm install

## Çalıştırma
- Python (konsol veya GUI):
  python save_the_bakery.py

- Node.js:
  node save-the-bakery.js
  veya
  npm start

(Dosya isimlerini projenin gerçek dosya adlarına göre güncelleyebilirim.)

## Oynanış
- Her seviyede belirli sayıda sipariş gelir.
- Siparişleri tamamlamak için doğru hamleleri/ürünleri seçin.
- Süre dolmadan siparişleri tamamlayıp puan kazanın.
- Yanlış ya da süre aşımı müşteri memnuniyetsizliği getirir; belirli seviyede oyun biter.

## Yapılandırma
- Maksimum aynı anda işlenebilen sipariş sayısı: 3 (değiştirilebilir)
- Zorluk seviyeleri: Kolay / Orta / Zor
- Sipariş veri kaynağı: orders.json veya benzeri bir dosya

## Testler
- Python: pytest veya python -m unittest
- Node: npm test

## Katkı
- Yeni müşteri türleri, tarifler veya grafiksel iyileştirmeler için PR açabilirsiniz.
- Lütfen issue ile mevcut hataları raporlayın.

## Lisans
- Lisans bilgisi (ör. MIT) burada yer almalıdır.

## İletişim
- Sahip: calti23