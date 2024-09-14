#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int *ptr;
    ptr = &var;

    cout << "Nilai dari var: " << ptr << endl;

    cout << "Alamat dari var: " << ptr << endl;

    return 0;
}
