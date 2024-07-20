#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    vector<int> numbers = {1,2,3,4,5};
    //using accumulate with a lambda to sum up the elements
    int sum = accumulate(numbers.begin(), numbers.end(), 0, [](int total, int n){
        return total + n;
    });
    cout << "Sum: " << sum << endl; //output: sum:15
    return 0;
}