#include<iostream>
using namespace std;

int fibonacci_series(int n) {
    int n1 = 0, n2 = 1, n3;
    
    if(n == 1) return n1;
    if(n == 2) return n2;
    
    for(int i = 3; i <= n; i++) {
        n3 = n1 + n2;
        n1 = n2;  // Update n1 to the next value
        n2 = n3;  // Update n2 to the next value
    }
    
    return n3;
}

int main() {
    cout << fibonacci_series(5);  // Should print the 5th Fibonacci number
    return 0;
}
