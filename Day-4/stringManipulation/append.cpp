#include<iostream>
using namespace std;

int main(){
    // string str = "Hello";
    // str.append(" Beautiful");
    // cout << str << endl;

    // return 0;

    string str = "Hello";
    string to_append = " Beautiful";
    str.append(to_append, 0, 10);
    cout << str << endl;

}
