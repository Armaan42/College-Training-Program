#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> number = {1,2,3,4,5};
    
    //using lambda approach
    auto sum=[=](int total, int n){
        for(int i=0; i<n; i++){
            total = total + number[i];
        }
        return total;
    };

    cout << "Sum: " << sum(0,5) << endl; //output: sum:15
}