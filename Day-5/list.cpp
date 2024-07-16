#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    l.push_back(10);
    l.push_front(12);

    cout << "Original list: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;

    l.push_back(10);
    l.push_back(20);
    l.push_back(10);
    l.push_back(30);

    l.unique();

    cout << "After unique: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.reverse();

    cout << "After reverse: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.resize(3);

    cout << "After resize: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list after operations: " << l.size() << endl;

    return 0;
}
