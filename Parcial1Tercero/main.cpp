#include <iostream> //Importe bruto e importe neto

using namespace std;

int main()
{
    //Declaracion de variables
    float bruto=0,neto=0;
    //Declaracion datos de usuario
    cout << "Ingrese el importe bruto:  "<< endl;
    cin >> bruto;
    //Condicional
    if (bruto>15000)
    {

    neto=bruto*0.16;

    }
    else
    {

    neto=bruto*0.1 ;

    }

    cout << "El importe neto es:  "<< bruto-neto;

    return 0;
} //Fin Algoritmo
