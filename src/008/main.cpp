#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    int key, i, j;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++) {
        min_idx = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx != i) {
            swap(arr[min_idx], arr[i]);
        }
    }
}

int main() {


    int n = 10;
    int arr[n];

    cout << "Enter array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // insertionSort(arr, n);
    selectionSort(arr, n);

    cout << "array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";


    return 0;
}