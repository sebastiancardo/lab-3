#ifndef ANFIBIO_H
#define ANFIBIO_H
#include"servivo.h"
#include <iostream>

using namespace std;

class Anfibio:public SerVivo
{protected:
    string tipodepiel;
    string tipodesangre;
    string NoTienePelo;
    string Alimentacion;
    string Reproduccion;
    string Habito;
    string Camina;
    string respiracion;


public:
    Anfibio(string _tipodepiel,string _alimento,string _pelo,string _tiposangre,string _reproduccion,string _habitad,string _camina,string _respiracion );


};

#endif // ANFIBIO_H
