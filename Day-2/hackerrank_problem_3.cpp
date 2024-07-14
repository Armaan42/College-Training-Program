#include<iostream>
using namespace std;

int main(){
    int x = 2;
    int y = 5;
    int z = 0;

    bool one = (x == 2);
    bool two = (x!=5);
    bool three = (x!=5 && y>=5);
    bool four = (z!=0 || x == 2);
    bool five = (!(y<10));

    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;
    cout << five << endl;
}