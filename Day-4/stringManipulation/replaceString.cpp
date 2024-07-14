#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello, world!";
    string old_substring = "world";
    string new_substring = "C++";

    int pos = 0;
    while ((pos = str.find(old_substring, pos)) != string::npos) {
        str.erase(pos, old_substring.length());
        str.insert(pos, new_substring);
    }

    cout << str << endl;
    
    return 0;
}
