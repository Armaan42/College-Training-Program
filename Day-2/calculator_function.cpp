#include<iostream>
using namespace std;

void add(double a, double b){
    cout << a + b << endl;
}

void sub(double a, double b){
    cout << a - b << endl;
}

void multiply(double a, double b){
    cout << a * b << endl;
}

void divide(double a, double b){
    cout << a / b << endl;
}


int main(){
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    int choice;
    cout << "1-Add\n2-Sub\n3-Mulitply\n4-Divide" << endl;
    cout << "Enter the choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            add(a, b);
            break;
        
        case 2:
            sub(a, b);
            break;

        case 3:
            multiply(a, b);
            break;
            
        case 4:
            divide(a, b);
            break;
    }
    return 0;

}