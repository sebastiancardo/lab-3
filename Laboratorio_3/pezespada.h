#ifndef PEZESPADA_H
#define PEZESPADA_H
#include"pez.h"

class PezEspada:public Pez
{protected:
    string pico;
public:
    PezEspada(string a,string b,string c,string d,string e,string f,string g,string h):Pez(a,b,c,d,e,f,g),pico(h){};
    void Respiro();
    void MeAlimento();
    void Habitad();
    void MeReproduzco();
    void MeDesplazo();
    void caracteriticas();
};

#endif // PEZESPADA_H
