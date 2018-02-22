#include <iostream> //Importe bruto e importe neto

using namespace std;

int main()
{
    //Declaracion de variables
    float ImBruto=0,ImNeto=0;
    //Declaracion datos de usuario
    cout << "Ingrese el importe bruto"<< endl;
    cin >> ImBruto;

    if (ImBruto>15000)
    {
        ImBruto*0.16=ImNeto << ImNeto << endl;
        cout<< "El importe Neto es:" << ImNeto << endl;
    }
        if (ImBruto<15000)
        {
            ImBruto*0.10=ImNeto << ImNeto << endl;
            cout<< "El importe Neto es:" << ImNeto << endl;
        }

    return 0;
}
