#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello World";
    int pos = str.find("World");
    if(pos != string::npos){
        cout << "World, found at position " << pos << endl;
    }
    else{
        cout  << "Not found" << endl;
    }
    return 0;
}
