#include<iostream>
using namespace std;

void add(int a, int b, int c){
    cout << "Three number sum: " << a + b + c << endl;
}

void add(int a, int b){
    cout << "Two number sum: " << a + b << endl;
}

int main(){
    int a, b, c;
    cout << "Enter the three number: ";
    cin >> a >> b >> c;

    add(a, b, c);
    add(a, b);
    return 0;
}