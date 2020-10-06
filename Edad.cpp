//
// Created by `Biiio on 9/23/2020.
//

#include <iostream>
using namespace std;
int edadUsuario;
string Nombre_Usuario;
string impedimento;
int zipcode;


int main(){

    cout << "Entre su nombre: ";
    cin >> Nombre_Usuario;
    cout << "Cual es su edad?";
    cin >> edadUsuario;
    cout << "Tiene algun impedimento? (si,  no)";
    cin >> impedimento;
    cout << "Cual es su zipcode?";
    cin >> zipcode;
    cout << Nombre_Usuario << "usted tiene " << edadUsuario << "años de edad, " << "vive en la zona " << zipcode << " y " << impedimento << "tiene impedimentos.";

}
