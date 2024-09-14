#include <iostream>
using namespace std;

int main () {
    int value = 15;
    int *ptr1 = &value;
    int *ptr2 = ptr1;

    cout << "Nilai asli: " << *ptr1 << endl;

    *ptr2 = 20;

    cout << "Nilai setelah di ubah melalui ptr2: " << *ptr1 << endl;

    cout << "alamat yang di tunjukan ptr1: " << ptr1 << endl;
    cout << "alamat yang di tunjukkan ptr2: " << ptr2 << endl;

    return 0;
}