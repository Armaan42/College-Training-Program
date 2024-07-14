#include<iostream>
using namespace std;

int main(){
    int inr;
    cout << "Enter the amount (INR): ";
    cin >> inr;

    int pound = inr / 106.90;
    cout << "Pounds: " << pound << endl;

    return 0;
}