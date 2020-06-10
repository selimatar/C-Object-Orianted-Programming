#include <iostream>

using namespace std;

class dikdortgen{
    
    public: 
        int en;
        int boy;
        int alan(){
            return en * boy;
        }
        int cevre (){
            return 2*(en+boy);
        }
};

int main(){
    dikdortgen ilk;
    dikdortgen ikinci;
    ilk.en=50;
    ilk.boy=100;
    ikinci.en=150;
    ikinci.boy= 200;
    cout << "ilk dikdortgenin alanı:"<< ilk.alan() << " cevresi:" << ilk.cevre() << endl;
    cout << "ikinci dikdortgenin alanı:"<< ikinci.alan() << " cevresi:" << ikinci.cevre() << endl;
    
}
