#include <iostream>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    if (k > 0) {
        do {
            cout << "Enter integer nr. " << i << ": ";
            cin >> number;

            // Check if the input failed (user entered non-integer characters)
            if (cin.fail()) {
                cout << "Warning: Invalid input! Please enter an integer." << endl;
                cin.clear(); // Reset the error flags on the cin stream
                // Discard invalid characters from the input buffer up to the newline
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue; // Skip the rest of the loop body and prompt again
            }

            sum_k += number;
            i++;
        } while (i <= k);
    }

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
