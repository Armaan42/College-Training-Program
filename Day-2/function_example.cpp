#include<iostream>
using namespace std;

void sayHello(string name){ 
    cout << "Hello " << name << endl;
}

int main(){
    string name;
    cout << "Enter the name: ";
    getline(cin, name);

    sayHello(name); 
}   

