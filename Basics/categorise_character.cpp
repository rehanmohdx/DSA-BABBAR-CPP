#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "put the character" << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "it is lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "it is uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "it is numeric" << endl;
    }

    return 0;
}