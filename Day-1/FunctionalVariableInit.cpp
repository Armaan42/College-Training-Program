#include<iostream>
using namespace std;

int main(){
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    //init bad_initialization (doesn't_Exist3 + doesn't_Exist4);

    //Information lost. less safe than braced initializers
    int narrowing_conversion_functional(2.9);

    cout << "Apple count : " << apple_count << endl;
    cout << "Orange count : " << orange_count << endl;
    cout << "Fruit count : " << fruit_count << endl;
    cout << "Narrowing conversion : " << narrowing_conversion_functional << endl; // will lose into

    return 0;
}