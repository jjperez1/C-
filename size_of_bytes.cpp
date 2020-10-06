#include <iostream>
using namespace std;

// prototipo de la funcion
void muestraTamanoDatos();

int main() {
    cout << "The size of the data type char is: " << sizeof(char) << "byte(s)" << endl;
    cout << "The size of the data type int is: " << sizeof(int) << " byte(s)" << endl;
    cout << "The size of the data type string is: " << sizeof(string) << " byte(s)" << endl;
    cout << "The size of the data type bool is : " << sizeof(bool) << " byte(s)" << endl;
    cout << "The size of the data type double is: " << sizeof(double) << " byte(s)" << endl;
    cout << "The size of the data type float is: " << sizeof(float) << " byte(s)" << endl;
    return 0;
}
