/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float iva, mat, pre, total;
    int opcion;
    char des[100], ge[20], cla[20], con[20];
    
    cout << "\t ***MENU DE OPCIONES***" << endl; 
    cout << "1.-Alta de articulos" << endl;
    cout << "2.-Modelos de articulos" << endl;
    cout << "3.-Baja de articulos" << endl;
    cout << "4.-Lista de articulos" << endl;
    cout << "5.-Limpiar Pantalla" << endl;
    cout << "6.-Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese la matricula del articulo" << endl;
        cin >> mat;
        return main();

        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        system("cls"); // limpiar pantalla
        return main();
        break;
    case 6:
        exit(1); // cierra la pantalla
        break;
    
return main();
    }
}


