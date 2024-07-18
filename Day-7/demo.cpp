#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(9);

    //approach
    for(int num : s){
        cout << num << " ";
    }cout << endl;

    //2nd approach
    // vector<int> vec(s.begin(), s.end());

    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    cout << "is present " << s.count(7) << endl;
    set<int>::iterator itr = s.find(5);

    for(auto it = itr; it !=s.end(); it++){
        cout << *it << " ";
    }cout << endl;

}