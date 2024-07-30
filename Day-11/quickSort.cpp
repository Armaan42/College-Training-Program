#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int> &arr, int left, int right) {
    if (left < right) {
        int pivot = arr[(left + right) / 2];
        int i = left;
        int j = right;

        while (i <= j) {
            while (arr[i] < pivot) {
                i++;
            }
            while (arr[j] > pivot) {
                j--;
            }
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        QuickSort(arr, left, j);
        QuickSort(arr, i, right);
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    QuickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
