#include <iostream>
using namespace std;

int sequential_search(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Masukkan jumlah elemen array: ";
    cin >> size;

    int arr[size];
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;

    int index = sequential_search(arr, size, target);
    if (index != -1) {
        cout << "Nilai " << target << " ditemukan pada index " << index << endl;
    } else {
        cout << "Nilai " << target << " tidak ditemukan dalam array" << endl;
    }

    return 0;
}
