#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int Num1=0,Num2=0, Num3=0;
    //Declaracion datos de usuario
    cout << "Ingrese un numero"<< endl;
    cin >> Num1;
    cout << "Ingrese el segundo numero" <<endl;
    cin >> Num2;
    cout << "Ingrese el tercer numero" << endl;
    cin >> Num3;
    //Condicional
    if (Num1*Num2==Num3)
    {
        cout<<" El tercer numero es igual a la multiplicacion de los dos primeros:" << Num3 << endl;
    }
        if (Num1*Num2!=Num3)
        {
        cout<<" El tercer numero no es igual a la multiplicacion de los dos primeros:" << Num3 << endl;
        }

    return 0;
}
