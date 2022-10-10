#include <iostream>
using namespace std;

int main() {
    
    // Fibonacci Series Question
    int n = 10;

    int a = 0;
    int b = 1;
    // starting character printing
    cout << a << " " << b << " ";

    // for-loop
    for(int i = 1; i <= n; i++) {

        int nextNumber = a + b;
        // printing series
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }

    // Output: 0 1 1 2 3 5 8 13 21 34 55 89
}