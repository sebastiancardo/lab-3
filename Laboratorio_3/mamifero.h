#ifndef MAMIFERO_H
#define MAMIFERO_H
#include"servivo.h"
#include <iostream>

using namespace std;

class Mamifero:public SerVivo
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
    Mamifero(string _respiracion,string _alimentacion,string _habitad,string _reproduccion,string _desplazamiento,string _tiposangre,string _piel);
};

#endif // MAMIFERO_H
