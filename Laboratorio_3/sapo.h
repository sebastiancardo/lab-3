#ifndef SAPO_H
#define SAPO_H
#include"anfibio.h"

class Sapo:public Anfibio
{
protected:
    int Numerodepatas;
    string leche;
public:

    Sapo(string a,string b,string c,string d,string e,string f,string g,string h,int i,string j):Anfibio(a,b,c,d,e,f,g,h),Numerodepatas(i),leche(j){};
    void Respiro();
    void MeAlimento();
    void Habitad();
    void MeReproduzco();
    void MeDesplazo();
    void caracteriticas();
};

#endif // SAPO_H
