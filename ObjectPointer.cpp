#include <iostream>

using namespace std;

class insan{
      public:
        int boy;
        int kilo;
    public:
        void yemek(int kilo){ //örnek olarak, insanim yemek yedigi kadar kilosunun artmasını hedefliyoruz
            this->kilo += kilo;  //  this->kilo bu siniftan uretilmis olan kilo objesini ifade eder.
                                        // kilo ise yemek metodunun kilo parametresi
        }
};

int main(){
    
    insan selim;
    selim.boy = 185;
    insan * g; // insan turunden tanimli bir pointer
    g = &selim; 
    
    cout << "Selim'in Boyu: " << g->boy << endl;
    
    g->kilo = 70; //g pointer'i selim nesnesine erisip nesnenin kilo propertie'sini 70 atadi.
    cout << "Selim'in Kilosu: " << g->kilo << endl;
    
    g->yemek(5); //g  pointer'i selim nesnesine erisip nesnenin kilo metodunu 5 parametresi ile  calistirdi.
    cout << "Selim'in 5 Kilo Yemek Yedikten Sonra Kilosu: " << g->kilo << endl;
}