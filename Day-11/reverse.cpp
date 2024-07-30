#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size;
    cin >> size;

    vector<int> v(size);

    for(int i=0; i<size; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << "Sorted Array Before Reverse: ";

    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }cout << endl;

    cout << "Sorted Array after Reverse: ";

    for(int i = size-1; i>=0; i--){
        cout << v[i] << " ";
    }cout << endl;

    return 0;

}