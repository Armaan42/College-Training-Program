#include<iostream>
using namespace std;

//3rd approach
void print_number_expression(int a, int b){
    for(int i=a; i<=b; ++i){
        if(i==1){
            cout << "one" << endl;
        }
        else if(i==2){
            cout << "two" << endl;
        }
        else if(i==3){
            cout << "three" << endl;
        }
        else if(i==4){
            cout << "four" << endl;
        }
        else if(i==5){
            cout << "five" << endl;
        }
        else if(i==6){
            cout << "six" << endl;
        }
        else if(i==7){
            cout << "seven" << endl;
        }
        else if(i==8){
            cout << "eight" << endl;
        }
        else if(i==9){
            cout << "nine" << endl;
        }
        else{
            if(i%2==0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }   
}

int main(){
    int a, b;
    cin >> a >> b;

    //1st approach

    // for(int i=a; i<=b; i++){
    //     if(i >= 1 && i<=9){
    //         switch(i){
    //             case 1: cout << "one" << endl; break;
    //             case 2: cout << "two" << endl; break;
    //             case 3: cout << "three" << endl; break;
    //             case 4: cout << "four" << endl; break;
    //             case 5: cout << "five" << endl; break;
    //             case 6: cout << "six" << endl; break;
    //             case 7: cout << "seven" << endl; break;
    //             case 8: cout << "eight" << endl; break;
    //             case 9: cout << "nine" << endl; break;
    //         }
    //     }
    //     else {
    //         if(i%2==0){
    //             cout << "even" << endl;
    //         }
    //         else{
    //             cout << "odd" << endl;
    //         }
    //     }
    // }

    //2nd approach

    // string s[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // for(int i=a; i<=b; i++){
    //     if(i >= 1 && i <= 9){
    //         cout << s[i-1] << endl;
    //     }
    //     else{
    //         if(i%2==0){
    //             cout << "even" << endl;
    //         }
    //         else{
    //             cout << "odd" << endl;
    //         }
    //     }
    // }

    //3rd approach
    print_number_expression(a, b);
}