#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the diamond: ";
    cin >> n;

    // Top part of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        cout << "*";
        if (i != 0) { // Avoid printing the second star on the first row
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; // Print the second star for the current row
        }
        cout << endl; // Move to the next line
    }

    // Bottom part of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        cout << "*";
        if (i != 0) { // Avoid printing the second star on the last row
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; // Print the second star for the current row
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
