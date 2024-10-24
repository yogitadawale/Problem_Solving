//Find the unique elements from the given array.
#include<iostream>
#include<unordered_map>
using namespace std;

void find_unique_elements(int arr[], int n) {
    unordered_map<int, int> freq;
    
    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    // Print elements that appear exactly once
    cout << "Unique elements: ";
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 5, 3, 7, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    find_unique_elements(arr, n);
    
    return 0;
}
