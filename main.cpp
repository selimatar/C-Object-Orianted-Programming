#include <iostream>

using namespace std;

//                                                                     Overloading                                                                     //

// Neden yapılır? ---> Nesne tek başına bir varlık olduğu ve dışarıdan izole bir yapıya sahip oldugu için 
// disaridan degisik iletisim sekillerine karsi destekleyebilmemiz gerekiyor. Yani yapilacak eylemin degisik
// tiplerdeki parametleri destekleyecek sekilde calisabiliyor olmasi lazim. 
// Neticede nesneyle iletisimimizi kuran sey metotlardır. 

class insan {
    private:
        int boy;
        int kilo;
    public:
        void setBoy(int x){ //180 cm
            boy = x;
        }
        void setBoy(float x){ //1.85 m
            boy = x * 100;
        }
        
        // Su sekilde de kullanilabilir;
        void setBoy(int x, int y){
            boy = x;
            kilo = y;
        }
        
        int getBoy(){
            return boy;
        }
};

int main(void){
    insan ali;
    
    ali.setBoy(180);
    cout << "Ali'nin boyu: " << ali.getBoy() << "cm" << endl;
    
    insan selim
    float b = 1.85;
    selim.setBoy(b);
    cout << "Selim'in boyu: " << selim.getBoy() << "m" << endl;
    return 0;
}
