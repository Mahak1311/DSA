/*To find out whether a number n is prime or not
The logic: if a number is divided by any other number except 1 and istelf than that number is a prie number*/
#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true; /*it will return true only after checking
                  every number using for loop that's why it's written outside for loop and not together with false*/
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (Prime(n))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}

