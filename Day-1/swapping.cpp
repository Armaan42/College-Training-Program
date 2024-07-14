#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    cout << "Before swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //1st approach
    int c;

    c = a;
    a = b;
    b = c;

    //2nd approach

    // a = a + b;
    // b = a - b;
    // a = a - b;

    cout << "After swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

