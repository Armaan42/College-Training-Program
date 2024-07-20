#include <iostream>
#include <string>
using namespace std;

int count_duplicate(string str, char key){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == key){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    char key;
    cout << "Enter the element to find: ";
    cin >> key;

    int found = count_duplicate(str, key);
    cout << found << endl;

    return 0;
}
