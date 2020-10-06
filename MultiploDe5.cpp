//
// Created by `Biiio on 9/28/2020.

#include <iostream>
using namespace std;

int main(){

    int x = 0;
    int z;
    int y = 3;
    while (y < 10000000000) {

        cout << "Entre un numero: " << endl;
        cin >> x;

        z = (x % 5);

        if (z == 0) {
            cout << "El numero entrado, es un multiplo de 5" << endl;
        } else {
            cout << "El numero entrado, no es un multiplo de 5" << endl;
        }
    }
}