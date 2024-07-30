#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDuplicates(vector<string> words){
    vector<string> duplicateItems;
    sort(words.begin(), words.end());
    for(int i = 0; i < words.size() - 1; i++){
        if(words[i] == words[i + 1]){
            duplicateItems.push_back(words[i]);
        }
    }

    for(int i=0; i<duplicateItems.size(); i++){
        cout << duplicateItems[i] << " "; 
    }cout << endl;
}

int main(){
    vector<string> words{"welcome", "to", "miet", "for", "intern", "to", "intern"};
    printDuplicates(words);
    return 0;
}
