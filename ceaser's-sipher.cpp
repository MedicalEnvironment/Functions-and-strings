#include <iostream>
#include <string.h>
using namespace std;

int main() {
    cout << "Enter the message:\n";
    char msg[100];
    cin.getline(msg,100); //take the message as input
    int i, j, length,choice,key;
    cout << "Enter key: ";
    cin >> key; //take the key as input
    length = strlen(msg);
        char ch;
        for (int i = 0; msg[i] != '\0'; ++i) {
            ch = msg[i];
            //encrypt for lowercase letter
            if(ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }
                msg[i] = ch;
            }
            //encrypt for uppercase letter
            else if (ch >= 'A' && ch <= 'Z') {
                ch = ch + key;
                if (ch > 'Z') {
                    ch = ch - 'Z' + 'A' - 1;
                }
                msg[i] = ch;
            }
        }
    printf("Encrypted message: %s", msg);
}