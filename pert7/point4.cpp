#include <iostream>
using namespace std;

int main () {
    int x;
    int *a;
    x=7;
    a=&x;
    
    cout << "Alamat x adalah " << &x << endl;
    cout << "NIlai x adalah " << x << endl;
    cout << "alamat a adalah " << &a << endl;
    cout << "nilai a adalah " << a << endl;
    cout << "nilai *a adalah " << *a << endl;

}