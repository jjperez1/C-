//
// Created by Jesus on 9/28/2020.
//
#include <iostream>
using namespace std;
int num = 0;

int main() {

    while (num < 10000000)
    {

        cout << "Escriba un numero: " << endl;
        cin >> num;

        //evaluar si el numero es par o no

        if (num % 2 == 0) {

            cout << "El numero que entraste (" << num << ") es un numero par." << endl;
        } else {

            cout << "El numero que entraste (" << num << ") es un numero impar." << endl;

        }
    }
}