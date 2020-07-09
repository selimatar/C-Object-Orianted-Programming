#include <iostream>

using namespace std;

//Encapsulation(Kapsülleme)
class dikdortgen{
    private:
        int boy;
        int en;
    public:
        int alan();
        int cevre(){
            return 2*(boy+en);
        }
    int getBoy(){
        return boy;
    }
    void setBoy(int b){
        if(b >= 0)
            boy = b;
        else 
            boy = 0;
    }
    int getEn(){
        return en;
    }
    void setEn(int x){
        if(x < 0)
            en = 0;
        else
            en = x;
    }
};

int dikdortgen::alan(){
    return en * boy;
}

int main(){
    dikdortgen a;
    a.setBoy(150);
    a.setEn(50);
    
    cout << "Alan: " << a.alan() << "Cevre: " << a.cevre() << "Boy: " << a.getBoy() << "En: " << a.getEn() << endl;
    
}