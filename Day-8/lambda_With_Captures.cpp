/*
Lambda with Captures

You can capture variable from the surrounding scope. There are several ways to do this:

1. Capture by value: [=] Captures all variable by value.
2. Capture by refernces: [&] Captures all variables by reference.
3. Capture specific variables: [x, &y] Captures 
*/

#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;

    auto add = [=](int a){
        return x+y+a;
    };

    cout << "Sum: "<< add(5) << endl;

    auto addbyRef = [&x, &y](int a){
        x = 30; // modifying x
        return x+y+a;
    };

    cout << "Sum by references: " << addbyRef(5) << endl; //output: Sum by refernces: 55
    cout << "x after modification: " << x << endl; //output: x after modification: 30
    return 0;
}