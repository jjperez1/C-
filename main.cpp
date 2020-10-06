//
// Created by `Biiio on 9/23/2020.
//

#include <iostream>
using namespace std;



int main(){

    unsigned int edadUsuario;
    string Nombre_Usuario;
    string impedimento;
    string zipcode;

    cout << "Entre su nombre: " << endl;
    cin >> Nombre_Usuario;
    cout <<  "Cual es su edad?" << endl;
    cin >> edadUsuario;
    cout << "Tiene algun impedimento? (si,  no)" << endl;
    cin >> impedimento;
    cout << "Cual es su zipcode?" << endl;
    cin >> zipcode;
    cout << "\n\n\n";
    cout << Nombre_Usuario << ", usted tiene " << edadUsuario << " a\244os de edad, " << "vive en la zona " << zipcode << " y " << impedimento << " tiene impedimentos.";
    cout  << "\n\n\n";
}
