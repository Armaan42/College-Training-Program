// #include <iostream>
// using namespace std;

// int main() {
//     string str = "Welcome";
//     str.insert(7, " to C++");
//     cout << str << endl;  
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    string str = "Welcome";
    string insert_str = "to C++";
    str.insert(7, insert_str, 0, 6); 
    cout << str << endl; 
    return 0;
}

