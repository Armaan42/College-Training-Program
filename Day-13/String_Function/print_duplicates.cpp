#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void printDuplicates(vector<string> words){
    vector<string> duplicates;
    sort(words.begin(), words.end());

    for(int i = 1; i < words.size(); ++i){
        if(words[i] == words[i-1]){
            if(find(duplicates.begin(), duplicates.end(), words[i]) == duplicates.end()){
                duplicates.push_back(words[i]);
            }
        }
    }

    for(const auto& word : duplicates){
        cout << "Duplicate word: " << word << endl;
    }
}

int main(){
    vector<string> words{"Welcome", "to", "miet", "for", "training"};
    printDuplicates(words);
    return 0;
}
