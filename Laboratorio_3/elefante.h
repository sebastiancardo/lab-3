#ifndef ELEFANTE_H
#define ELEFANTE_H
#include"mamifero.h"

class Elefante:public Mamifero
{protected:
    string tamanodetrompa;
    string orejas;
public:
    Elefante(string a,string b,string c,string d,string e,string f,string g,string h, string i):Mamifero(a,b,c,d,e,f,g),tamanodetrompa(h),orejas(i){};
    void Respiro();
    void MeAlimento();
    void Habitad();
    void MeReproduzco();
    void MeDesplazo();
    void caracteriticas();
};

#endif // ELEFANTE_H
