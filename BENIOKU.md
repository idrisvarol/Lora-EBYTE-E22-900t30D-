# Lora-EBYTE-E22-900t30D
Bu projede lora hakkında örnek kodlar ve potansiyel hatalar olacaktır. Asıl amacım bu modülü öğrenmek ve onu projelerimde kullanmaktır. 

Mevzu Bahis lora modülü, mikrodenetleyici olarak Deneyap Kart aracılığıyla iletişim kurmuştur.

PROJE HALA GELİŞTİRİLMEKTEDİR

Destekleri için Mertcan, Şevval ve Talha Hocalarıma teşekkür ederim. 

LoRa modülü, roketçilikte ya da yerel iletişimde kullanılan, alameti farikası düşük güçle yüksek menzil olan bir mödüldür. Çeşitli lora modelleri de olsa kanaatimce EBYTE firması bu konuda en güvenilir olduğunu söyleyebilirim. Kendileri lora hakkında kullanılımını kolaylaştırmak için çok fazla ürün ve uygulama ortaya koymuşlardır.

Kodumuza geçmeden önce KÜTÜPHANESİZ şekilde kod yazdığımı unutmayın. İleride kütüphane yazma gibi bir fikrim de yok ama ırss verisi almak gibi fikirlere girersek kütüphane şart gibi oluyor. 

İlk önce size biraz EBYTE firmasının e22 serisine bağlı loraların nasıl çalıştığından bahsedeyim.

Lora, çeşitli modlarla çalışmaktadır. <img width="1661" height="599" alt="image" src="https://github.com/user-attachments/assets/ae7806a8-c932-4e52-a7f9-a5370df77700" /> Görselde göründüğü üzere 4 farklı modu vardır. Bizim için önemli olan 2 mod var. Normal ve konfigürasyon modu. Normal modda lora, kodda ve konfigürasyonda yazan parametrelere göre yayın yapmaktadır. Parametrelere gelmeden önce loranın belkemiği olan M1 ve M0 pinlerinden bahsetmek istiyorum. M0 ve M1 pinleri loranın modlarını yönetir. Birer dijital pinlerdir aslında. Hangi moda nasıl geçildiğini ayarlamak için M0 ve M1 pinlerine HİGH veya LOW yollamamız gerekir.

LoRa kendisine seri monitörden gelen bütün verileri yayın yapar. 
