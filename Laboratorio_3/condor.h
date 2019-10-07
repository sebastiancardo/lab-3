#ifndef CONDOR_H
#define CONDOR_H
#include"ave.h"

class Condor:public Ave
{
protected:
    string tamano;
    int numerodealas;
public:
    Condor(string a,string b,string c,string d,string e,string f,string g,string h,int i):Ave(a,b,c,d,e,f,g),tamano(h),numerodealas(i){};
    void Respiro();
    void MeAlimento();
    void Habitad();
    void MeReproduzco();
    void MeDesplazo();
    void caracteriticas();
};

#endif // CONDOR_H
