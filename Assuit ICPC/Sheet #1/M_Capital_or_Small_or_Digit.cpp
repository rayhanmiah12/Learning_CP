#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    int ascii_value = int(X);

    if (ascii_value >= 48 && ascii_value <= 57) {
        cout << "IS DIGIT" << endl;
    }
    else if (ascii_value >= 65 && ascii_value <= 90) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (ascii_value >= 97 && ascii_value <= 122) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    return 0;
}

