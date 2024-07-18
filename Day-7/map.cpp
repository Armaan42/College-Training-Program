#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "ajay";
    m[2] = "nanjay";
    m[3] = "manjay";
    m.insert({5, "ankita"});

    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    int keyToFind;
    cin >> keyToFind;

    auto it = m.find(keyToFind);
    if (it != m.end()) {
        cout << "Key " << keyToFind << " found with value: " << it->second << endl;
    } else {
        cout << "Key " << keyToFind << " not found in the map" << endl;
    }

    m.erase(3);

    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
