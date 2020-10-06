//
// Created by `Biiio on 9/30/2020.
//

//hay que incluir este header <sstream> file para poder utilizar el getline function sin problemas
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string name;
    cout << "Enter your full name here: " << endl;
    getline(cin, name);
    
    cout << name;

}
