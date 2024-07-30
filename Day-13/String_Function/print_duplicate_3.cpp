#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

void printDuplicate(vector<string> words){
    set<string> items(words.begin(), words.end());
    vector<string> duplicates;

    if(items.size() < words.size()){
        for(int i = 0; i < words.size(); i++){
            if(items.count(words[i]) > 1){
                duplicates.push_back(words[i]);
            }
        }
    }
    for(int i = 0; i < duplicates.size(); i++){
        cout << duplicates[i] << endl;
    }
}

int main(){
    vector<string> words{"apple", "mango", "banana", "mango", "pineapple", "apple", "apple"};
    printDuplicate(words);
    return 0;
}
