#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of inner vectors: ";
    cin >> size;

    vector<vector<int>> nestedVector(size);

    for (int i = 0; i < size; i++) {
        int innerSize;
        cout << "Enter the size of inner vector " << i + 1 << ": ";
        cin >> innerSize;

        cout << "Enter " << innerSize << " elements for inner vector " << i + 1 << ": ";
        for (int j = 0; j < innerSize; j++) {
            int element;
            cin >> element;
            nestedVector[i].push_back(element);
        }
    }

    cout << "Nested Vector:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Inner vector " << i + 1 << ": ";
        for (int j = 0; j < nestedVector[i].size(); j++) {
            cout << nestedVector[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
