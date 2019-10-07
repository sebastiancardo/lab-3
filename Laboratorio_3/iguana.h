#ifndef IGUANA_H
#define IGUANA_H
#include"reptil.h"

class Iguana:public Reptil
{protected:
    int numerodedos;
    string cola;
public:
    Iguana(string a,string b,string c,string d,string e,string f,string g,int h, string i):Reptil(a,b,c,d,e,f,g),numerodedos(h),cola(i){};
    void Respiro();
    void MeAlimento();
    void Habitad();
    void MeReproduzco();
    void MeDesplazo();
    void caracteriticas();

};

#endif // IGUANA_H
