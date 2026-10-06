#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    char op;
    double result;
    cout << "Vvod 1 : ";
    cin >> a;
    cout << "Vvod 2: ";
    cin >> b;
    cout << "Vvod op: ";
    cin >> op;
    if (op == '+') {
        result = a + b;
        cout << "Resultat: " << result << endl;
    }
    else if (op == '-') {
        result = a - b;
        cout << "Resultat: " << result << endl;
    }
    else if (op == '*') {
        result = a * b;
        cout << "Resultat: " << result << endl;
    }
    else if (op == '/') {
        result = a / b;
        cout << "Resultat: " << result << endl;
    }
    else {
        cout << "Never op" << endl;
    }
    return 0;
}