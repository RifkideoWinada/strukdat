#include <iostream>
#include <vector>
using namespace std;

void search_and_display(int arr[], int size, int target) {
    vector<int> indexes;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            indexes.push_back(i);
        }
    }

    if (indexes.size() > 0) {
        cout << "Data " << target << " ditemukan pada index ke: ";
        for (int i = 0; i < indexes.size(); ++i) {
            cout << indexes[i];
            if (i != indexes.size() - 1) {
                cout << " dan ";
            }
        }
        cout << endl;
    } else {
        cout << "Data " << target << " tidak ditemukan dalam array" << endl;
    }
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

    search_and_display(arr, size, target);

    return 0;
}
