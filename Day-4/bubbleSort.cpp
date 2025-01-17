#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cin >> size; 

    int arr[size]; 

    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }

    bubbleSort(arr, size); 

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl; 
    }

    return 0;
}
