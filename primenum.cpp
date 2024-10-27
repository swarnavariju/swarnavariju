#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Asking for user input
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are:\n";

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        // Check if i is a prime number
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        // If i is prime, print it
        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << std::endl;

    return 0;
}
