#include <iostream>

using namespace std;

//                          Inheritance, Miras                                  //

//  Inherit edilecek class'a erişim sağlanabiliyor olmalidir.

//  Degiskenlerin access modifier'ı private oldugu zaman sinif disindan hicbir sekilde
//  erisim saglanamayacaktir.

//  Gerekli durumlarda degiskenlerimizin access modifier'ını protected yapip kendi
//  siniflarinin icinden veya inherit yapilacak sinif icerisindeki bir metottan erisim saglayabiliriz.
//  Fakat main fonksiyonunun icinden bu degiskenlere erisim saglayamayiz.

// Kısaca, public: herkese, private: sadece kendisine, protected: kendisine ve inherit edilenlere acik.

class insan{
    protected:
        int boy;
        int kilo;
        char * adres; // ' char * ' ifadesi yerine string ifadesi de kullanılabilir. 
        //Fakat string ifadesinin kullanılabilmesi için kütüphanesi tanıtılmalıdır.
    public:
        int yemek(){
            kilo ++;
        }
};

class calisan : public insan{  // calisan classı, insan class'ından inherit edildi
//insan class'ının calısan  class'ına hangi access modifier ile erişiceği belirtilmelidir
    public:
        int maas;
        int zam(int x){
         maas += x; 
         kilo = 100;  // metot içinden erişilebilip erişilemedigi kontrolu icin yazildi.
        // maasina zam geldiginde insan kilo alir demek icin degil. Bu sadece bir kontrol örnegidir.
        }
        void kiloBastir(){
            cout << "Kilo: " << kilo << endl;
        }
        
};

int main ( void ){
    calisan Mehmet;
    Mehmet.maas = 5000;
    //Mehmet.boy = 170;
    //cout << "Mehmet'nin Boyu: " << Mehmet.boy << endl;
    cout << "Mehmet'nin Maasi: " << Mehmet.maas << endl;
    Mehmet.kiloBastir();
    Mehmet.zam(500);
    Mehmet.yemek();
    cout << "Mehmet'nin Zamli Maasi: " << Mehmet.maas << endl;
    Mehmet.kiloBastir();
    return 0;
}