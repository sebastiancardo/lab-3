#ifndef AVE_H
#define AVE_H
#include"servivo.h"
#include <iostream>

using namespace std;
class Ave:public SerVivo
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
    Ave(string _respiracion,string _alimentacion,string _habitad,string _reproduccion,string _desplazamiento,string _tiposangre,string _piel);
};

#endif // AVE_H
