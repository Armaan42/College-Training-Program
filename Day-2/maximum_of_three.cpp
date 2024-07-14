#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    if((a>b) && (a>c)){
        cout << a << " is greater" << endl;
    }
    else if((b>a) && (b>c)){
        cout << b << " is greater" << endl;
    }
    else if((c>a) && (c>b)){
        cout << c << " is greater" << endl;
    }
    else{
        cout << "Wrong input" << endl;
    }
    return 0;
}