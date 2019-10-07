#ifndef MANTIS_H
#define MANTIS_H
#include"insecto.h"

class Mantis:public Insecto
{protected:
    string ojos;
    string cabeza;
public:
    Mantis(string a,string b,string c,string d,string e,string f,string g,string h,string i):Insecto(a,b,c,d,e,f,g),ojos(h),cabeza(i){};
    void Respiro();
    void MeAlimento();
    void Habitad();
    void MeReproduzco();
    void MeDesplazo();
    void caracteriticas();
};

#endif // MANTIS_H
