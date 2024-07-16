#include <iostream>
#include <deque>
using namespace std;

int main() {
    //deque means you can perform push and pop operation from both end.
    deque<int> d;

    // Insertion
    d.push_back(10);
    d.push_front(11);

    cout << "Deque after insertion: ";
    for (const int& i : d) {
        cout << i << " ";
    }
    cout << endl;

    // Delete
    d.pop_back();
    cout << "Deque after deleting from back: ";
    for (const int& i : d) {
        cout << i << " ";
    }
    cout << endl;

    // Delete from front
    d.pop_front();
    cout << "Deque after deleting from front: ";
    for (const int& i : d) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Empty or not: " << (d.empty() ? "Empty" : "Not empty") << endl;

    cout << "Before erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase: " << d.size() << endl;

    return 0;
}
