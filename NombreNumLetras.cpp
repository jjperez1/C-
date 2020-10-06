//
// Created by `Biiio on 9/30/2020.
//

#include <iostream>
using namespace std;

string name;

int main() {

    cout << "Enter a name here: " << endl;
    cin >> name;
    cin.ge
    for (int letters = 0; letters <= name.length(); letters++) {
        if (letters == name.length()) {
            cout << "The name " << name << " has " << letters << " letters in it." << endl;
        }
    }
}

/*podia haber usado la funcion size() en vez de hacer un for loop
 * se hacia solo cout << name << "has" << name.size() << "letters in it" << endl;
 * comoquiera termino funcionando so YEET
*/