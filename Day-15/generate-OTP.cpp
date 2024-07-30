#include <iostream>
#include <string>
using namespace std;

string generateOTP(int length) {
    string characters = "ABCDEFGHIJKLMNP";
    string numbers = "12345678910"; 
    string otp;

    for (int i = 0; i < length; ++i) {
        if (rand() % 2 == 0) {
            otp += characters[rand() % characters.size()];
        } else {
            otp += numbers[rand() % numbers.size()];
        }
    }

    return otp;
}

int main() {
    int length;
    cout << "Enter the length of the OTP: ";
    cin >> length;

    string otp = generateOTP(length);
    cout << "Generated OTP: " << otp << endl;

    return 0;
}
