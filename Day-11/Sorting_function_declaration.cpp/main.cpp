#include<iostream>
#include<vector>
#include"function.h"
using namespace std;

void QuickSort(vector<int> &arr, int left, int right);

int main(){
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Quick Sorting: ";
    QuickSort(arr, 0, size - 1);    

    return 0;
}