#include <iostream>
#include <vector>
#include<set>
#include <string>

using namespace std;

void printDuplicates(vector<string> words){
    set<string> duplicateWords;

    for(int i = 0; i < words.size(); i++){
        for(int j = i + 1; j < words.size(); j++){
            if(words[i] == words[j]){
                duplicateWords.insert(words[i]);
                break; 
            }
        }
    }

    for(string word : duplicateWords){
        cout << word << endl;
    }

}

int main(){
    vector<string> words{"apple", "mango", "banana", "mango", "pinfapple", "apple", "apple"};
    printDuplicates(words);
    return 0;
}
