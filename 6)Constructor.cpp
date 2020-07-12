#include <iostream>

using namespace std;

//                          Constructor                     //

// Sinif tarafindan tanimli olan ilk metotlardir. 
// Bir objenin ilk calistirilan metotlaridir.

class insan{
    private:
        int kilo;
        int boy;
            
    public:
        
        insan(){ // constructor'ların herhangi bir return type'i yoktur.
        //class ile ayni isme sahip olup ozel bir metottur.
            boy = 10;
            kilo = 1;
        }
        insan(int b){
            boy = b;   
        }
        insan(int b, int k){
            boy = b;
            kilo = k;
        }
        void setBoy(int b){
            boy = b ;   
        }
        int getBoy(){
            return boy;
        }
        void setKilo(int k){
            kilo = k;
        }
        int getKilo(){
            return kilo;
        }
};

int main(void){
    
    insan mehmet;
    insan selim(185,70);
    
    cout << "Mehmet'in boyu: " << mehmet.getBoy() << endl;
    cout << "Mehmet'in kilosu: " << mehmet.getKilo() << endl;
    //Hicbir parametre vermedigimiz icin Mehmet'e default constructor tanimlandi 
    
    cout << "Selim'in boyu: " << selim.getBoy() << endl;
    cout << "Selim'in kilosu: " << selim.getKilo() << endl;
    //2 parametre verdigimiz icin Selim'e boy ve kilo ataması yapilan constructor tanimlandi
 
    return 0;
    }
