//
// Created by `Biiio on 9/30/2020.
//

#include <iostream>
using namespace std;

int num;
int z;
int main() {

    while (z < 1000000000) {
        cout << "Please enter an Integer: " << endl;
        cin >> num;


        bool first(num >= 25);
        bool second(num <= 75);

        if ((first & second) == 1) {
            cout << "The number you entered (" << num << ") is between 25 and 75." << endl;
        } else
            cout << "The number you entered (" << num << ") is not between 25 and 75." << endl;
            cout << "\n";
    }


}