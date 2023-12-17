#include <iostream>
#include <cstdlib>

using namespace std;


string generatePassword(int length) {
    string allowed_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    string password = "";
    srand(time(0));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % allowed_chars.length();
        password += allowed_chars[randomIndex];
    }

    return password;
}

int main() {
    int length;
    cout << "Enter the length of the password: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}