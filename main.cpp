#include <iostream>
#include <vector>

using namespace std;

// Function to find and print divisors in descending order
void printDivisors(int n) {
    vector<int> divisors;
    // Find and store divisors
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    // Print divisors in descending order
    cout << "Divisors of " << n << " in descending order:" << endl;
    for (int i = divisors.size() - 1; i >= 0; --i) {
        cout << divisors[i] << endl;
    }
}

int main() {
    int num;
    char choice;

    cout << "This program finds the positive divisors of a given integer." << endl;
    do {
        cout << "Enter a positive integer (enter a negative or zero to exit): ";
        cin >> num;

        if (num <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            continue;
        }

        printDivisors(num);

        cout << "Do you want to enter another integer? (Y/N): ";
        cin >> choice;
    } while (toupper(choice) == 'Y');

    cout << "Program exited." << endl;

    return 0;
}
