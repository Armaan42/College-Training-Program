#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "hello, world!";
    string substring = "world";

    if (str1.find(substring) != string::npos) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}
