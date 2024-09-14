#include <iostream>
using namespace std;

void exchange_sort(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

void print_array(int data[], int size) {
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";
    cout << endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan: ";
    print_array(data, n);

    exchange_sort(data, n);

    cout << "Data setelah diurutkan: ";
    print_array(data, n);

    return 0;
}