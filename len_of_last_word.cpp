// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal 
// substring consisting of non-space characters only.
 
// Example 1:
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.

#include <iostream>
#include <string>
using namespace std;

int len_of_last_Word(string s) {
    int len = 0;
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}

int main() {
    string s = "Hello World";
    cout << len_of_last_Word(s) << endl;
    return 0;
}
