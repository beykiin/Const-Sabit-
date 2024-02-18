// Const (Sabit).cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

//class Silah {
//    private:
//        int deger = 10;
//    public:
//        int get() const {
//            return deger;
//        }
//};
//
//int main()
//{
//    Silah silah;
//    silah.get();
//}

//class Silah {
//	    private:
//	        int deger = 10;
//	    public:
//
//	        const int* get() const {
//	            return &deger;
//	        }
//	};
//	
//	int main()
//	{
//	    Silah silah;
//	    const int* test = silah.get();
//	}

//class Silah {
//	private:
//		int deger = 10;
//	public:
//
//		int* get()  {
//			return &deger;
//				}
//		int getBaska() {
//			return deger;
//		}
//
//		};
//	
//		int main()
//		{
//			Silah silah;
//			*(silah.get()) = 100;
//			std::cout << silah.getBaska();
//		}

//class Silah {
//private:
//	int deger = 10;
//public:
//
//	int const * get() {
//		return &deger;
//	}
//	int getBaska() {
//		return deger;
//	}
//
//};
//
//int main()
//{
//	Silah silah;
//	const int* a = silah.get();
//	std::cout << silah.getBaska();
//}

//class Silah {
//	private:
//		int deger = 10;
//	public:
//
//		int* get(const Silah* ptr) {
//			return &deger;
//		}
//		int getBaska() {
//			return deger;
//		}
//
//	};
//
//	int main()
//	{
//		Silah silah;
//		silah.get(&silah);
//		std::cout << silah.getBaska();
//	}

	/*class Silah {
	private:
		int deger = 10;
	public:

		const int const * const get(const Silah* const ptr) const {
			ptr->deger = 50;
			return &deger;
		}
		int getBaska() {
			return deger;
		}

	};

	int main()
	{
		Silah silah;
		silah.get(&silah);
		std::cout << silah.getBaska();
	}*/

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
