#include <iostream>

using namespace std;

// Polymorphism, bir nesneye farkli sekillerde erisebilmek icin kullanilir.

class sekil{
    
    protected: // encapsulation edildi
        int boy;
        int en;
        
    public:    
        int getBoy(){ return boy; }
        int getEn(){ return en; }
        void setBoy(int b){ boy = b; }
        void setEn(int e){ en = e; }
        
        virtual int alan(){ // Virtual yani sanal metot
        // Aslinda goruntusu var ama bu goruntunun arkasindaki gerceklik farkli
        // Bir alan metodu tanimlandi, istersek bunu kullanabiliriz
        // Yeniden tanimlayip bir de upcast edilirse o zaman kendi alan metodumuz gecerli olur.
            cout << "Sekilden Alan" << endl;
            return 0;
        }
        sekil(int a,int b){ //constructor
        //constructor'lar her zaman public olur.
        if(a < 0)
            en = 0;
        else
            en = a;
            boy = b;
    }
};

class dikdortgen:public sekil{
    
    public: 
        dikdortgen(int a,int b):sekil(a,b){} //sekil'in constructor'ini cagir.
        int alan(){ // Override
        cout << "Dikdortgenden Alan: ";
        return en*boy;
    }
};

class ucgen:public sekil{
    
    public:
        ucgen(int a,int b):sekil(a,b){} //sekil'in constructor'ini cagir.
        int alan(){ // Override
        // Istersek override etmeyip, ana siniftaki alan metodunu kullanabiliriz
        cout << "Ucgenden Alan: ";
        return en*boy / 2;
        //taban * yuskeklik /2
    }
};

int main(){
    
    ucgen u(4,5);
    dikdortgen d(4,5);
    
    cout << "Ucgen Alani: " << u.alan() << endl;
    cout << "Dikdortgen Alani: " << d.alan() << endl;
    sekil *s;
    s = &u; // Upcasting
    //
    cout << "Seklin Alani(ucgen): " << s->alan() << endl;
    s = &d; // Upcasting
    cout << "Seklin Alani(dikdortgen): " << s->alan() << endl;
    
    //Sekilden alan calismiyor fakat ona hala erisebiliriz;
    sekil x(40,50);
    cout << "Sekil Nesnesinin Alani(dikdortgen): " << x.alan() << endl;
}

