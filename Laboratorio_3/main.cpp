#include <iostream>
#include"SerVivo.h"
#include"elefante.h"
#include"iguana.h"
#include"mantis.h"
#include"pezespada.h"
#include"sapo.h"
#include"condor.h"

using namespace std;

void ImprimirDatosSerVivo(SerVivo &obj)  //Referencia a objeto del tipo de la clase Interfaz
{
    obj.Habitad();

    obj.Respiro();

    obj.MeAlimento();

    obj.MeDesplazo();

    obj.MeReproduzco();

    obj.caracteriticas();

}

int main()
{
    Elefante obj2("pulmunes","hervivoros","bosques tropicales y praderas","sexual","terrestre","sangre caliente","abundante pelo","trompa muy larga","orejas muy grandes");

    ImprimirDatosSerVivo(obj2);

    Sapo obj1("humeda","insectos","no tiene pelo","sangre fria","ovipara","bosques y praderas","nadando","branquial",4,"segregrar leche venenosa" );

    ImprimirDatosSerVivo(obj1);

    Iguana obj3("pulmunar","hervivoros","vegetacion espesa","ovipara","terrestre","sangre fria","escamas",5,"su cola es muy larga y delgada");

    ImprimirDatosSerVivo(obj3);

    Mantis obj4("traqueas","carnivora","huertas y paisales","ovipara","terrestres","sangre caliente","si tiene piel","ojos muy grandes","puede girar 180 grados");

    ImprimirDatosSerVivo(obj4);

    Condor obj5("pulmonar","carnivoros","areas montañosas","ovipara","vuelos","sangre caliente","pulmas"," es considerada el ave voladora mas grande del planeta",2);
    ImprimirDatosSerVivo(obj5);

    PezEspada obj6("branquial","carnivoro","acuatico","ovipara","nado","","rugosa y sin escamas","su pico es en forma de una espada");

    ImprimirDatosSerVivo(obj6);





    return 0;
}
