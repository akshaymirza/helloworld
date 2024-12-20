#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Loop untuk setiap elemen yang belum tersortir
        for (int j = 0; j < n - i - 1; j++) {
            // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array sebelum sorting: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array setelah sorting: ";
    printArray(arr, n);
    return 0;
}

