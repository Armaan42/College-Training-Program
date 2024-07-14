#include<iostream>
using namespace std;

int main(){
    cout << "Hello World" << var << endl; // compile time error

    int value = 7/0;
    cout << "Value : " << value << endl;
    return 0;
}