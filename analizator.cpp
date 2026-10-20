#include <iostream>

using namespace std; 

bool isEven(int number);
bool isPositive(int number);
int digitSum(int number);
int digitCount(int number);
bool isPrime(int number);

int main() {
    int number;
    int choice;

    do {
        cout << "Enter number: ";
        if (!(cin >> number)) {
            cout << "Invalid input.\n";
            return 1;
        }

        cout << "Even: "       << (isEven(number)     ? "yes" : "no") << '\n';
        cout << "Positive: "   << (isPositive(number) ? "yes" : "no") << '\n';
        cout << "Digit sum: "  << digitSum(number)                    << '\n';
        cout << "Digit count: "<< digitCount(number)                  << '\n';
        cout << "Prime: "      << (isPrime(number)    ? "yes" : "no") << '\n';

        cout << "Continue? (1 - yes, 0 - no): ";
        cin >> choice;
        cout << '\n';
    } while (choice != 0);

    return 0;
}

bool isEven(int number) {
    return number % 2 == 0;
}

bool isPositive(int number) {
    return number > 0;
}

int digitSum(int number) {
    int n = abs(number);
    int sum = 0;
    if (n == 0) return 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int digitCount(int number) {
    int n = abs(number);
    if (n == 0) return 1;
    int count = 0;
    while (n > 0) {
        ++count;
        n /= 10;
    }
    return count;
}

bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}