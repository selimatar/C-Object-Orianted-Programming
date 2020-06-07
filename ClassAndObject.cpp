#include <iostream>

using namespace std;   

 //Sınıf: Bellekte yer tutmaz. Genel nitelikler tanımlanır.  
class insan{
  public:
    int boy;
    int kilo;
    int yas;
} ;
    
int main()
{
    //Nesne: Bellekte yer tutar. Sınıfa ait özellik değerleri ataması yapılır
     insan Selim;//İnsan sınıfında Selim nesnesi

    Selim.boy = 184;
    Selim.kilo = 71;
    Selim.yas = 24;
    
    cout <<  "\nSelim Nesnesinin Ozellikleri "<< endl;
    cout << "Boy: " << Selim.boy << "\nKilo: "  << Selim.kilo<< "\nYas: " << Selim.yas << endl;
    
    
    insan Mehmet;//İnsan sınıfında Mehmet nesnesi
    
    Mehmet.boy = 175;
    Mehmet.kilo = 82;
    Mehmet.yas = 28;
    
     cout <<  "\nMehmet Nesnesinin Ozellikleri "<< endl;
     cout << "Boy: " << Mehmet.boy << "\nKilo: "  << Mehmet.kilo<< "\nYas: " << Mehmet.yas << endl;
}
