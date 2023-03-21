// You are given a string s. You can convert s to a 
// palindrome by adding characters in front of it.
// Return the shortest palindrome you can find by performing this transformation.
 
// Example 1:
// Input: s = "aacecaaa"
// Output: "aaacecaaa"
// Example 2:
// Input: s = "abcd"
// Output: "dcbabcd"

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string shortestPalindrome(string s) {
    int n = s.length();
    string r(s);
    reverse(r.begin(), r.end());
    for(int i = 0; i < n; i++) {
        if(s.substr(0, n - i) == r.substr(i)) {
            return r.substr(0, i) + s;
        }
    }
    return s;
}

int main() {
    string s1 = "aacecaaa";
    string s2 = "abcd";
    cout << shortestPalindrome(s1) << endl; 
    cout << shortestPalindrome(s2) << endl; 
    return 0;
}
