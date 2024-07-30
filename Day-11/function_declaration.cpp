#include<iostream>
#include"allfunction.h"
using namespace std;

void operation :: input(){
    cin >> a >> b;
}

void operation :: show(){
    cout << a << " " << b << endl;
};

int main(){
    // cout << "Add Function: " << add(1,2) << endl;
    // cout << "sub Function: " << sub(1,2) << endl;

    operation obj;
    obj.input();
    obj.show();
}
