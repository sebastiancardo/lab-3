#ifndef INSECTO_H
#define INSECTO_H
#include"servivo.h"
#include <iostream>

using namespace std;

class Insecto:public SerVivo
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
    Insecto(string _respiracion,string _alimentacion,string _habitad,string _reproduccion,string _desplazamiento,string _tiposangre,string _piel);
};

#endif // INSECTO_H
