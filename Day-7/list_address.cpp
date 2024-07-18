#include<iostream>
#include<list>
using namespace std;

int main(){
    const char  * message {"Hello World!"};
    cout << "message: " << message << endl; //Hello World!

    cout << "*message: " << *message << endl; // H

    char message1[] { "Hello World!"};
    message1[0] = 'B';
    cout << "message1: " << message1 << endl; //Bello World!
    return 0;
}