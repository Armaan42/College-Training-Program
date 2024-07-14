#include<iostream>
using namespace std;

void inr_to_pound(float inr){
    float  pound = 106.80;
    float converted_currency = inr / pound;
    cout << converted_currency << endl;
}

void inr_to_dollar(float inr){
    float  dollar = 86.80;
    float converted_currency = inr / dollar;
    cout << converted_currency << endl;
}

void inr_to_yuan(float inr){
    float  yuan = 11.48;
    float converted_currency = inr / yuan;
    cout << converted_currency << endl;
}

int main(){
    float inr;
    cin >> inr;

    int choice;
    cout << "1-inr_to_pound\n2-inr_to_dollar\n3-inr_to_yuan\n";
    cout << "Enter the choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            inr_to_pound(inr);break;
        case 2:
            inr_to_dollar(inr);break;
        case 3:
            inr_to_yuan(inr);break;
    }
}