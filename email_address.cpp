#include <iostream>
#include <string>
using namespace std;

int main() {

    string email;
    bool atFlag = false;
    bool comFlag = false;

    cout << "Enter email address: ";
    cin >> email;

    for (int c = 0; c < email.length(); c++) {
        if (email[c] == '@')
            atFlag = true;
    //else if('@' > 1) {  //got to make a statement if '@' sign more than 1 time its false and email is incorrect!
        //atFlag = false;
    }
    int size = email.length();
    if (email.substr(size - 4, size - 1) == ".com")
        comFlag = true;
    if (atFlag and comFlag) {
        cout << "Valid email address\n";
    } else {
        cout << "Invalid email address\n";
    }

    return 0;
}