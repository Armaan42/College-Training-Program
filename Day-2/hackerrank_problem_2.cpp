#include<iostream>
using namespace std;

int main(){
    float class_held;
    float class_attended;
    cin >> class_attended >> class_held;

    float percentage = (class_held/class_attended);
    float x = percentage*100.0;
    cout << x << endl;
    if(x > 75){
        cout << "Allowed" << endl;
    }
    else{
        cout << "Not Allowed" << endl;
    }
}