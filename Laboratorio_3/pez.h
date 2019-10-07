#ifndef PEZ_H
#define PEZ_H
#include"servivo.h"
#include <iostream>

using namespace std;

class Pez:public SerVivo
{
protected:
    string Respiracion;
    string Alimentacion;
    string Habito;
    string Reproduccion;
    string Desplazamiento;
    string Tipodesangre;
    string piel;
public:
    Pez(string _respiracion,string _alimentacion,string _habitad,string _reproduccion,string _desplazamiento,string _tiposangre,string _piel);
};

#endif // PEZ_H
