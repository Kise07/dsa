#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Sum from 1 - n
    int sum = 0;

    // for-loop
    for(int i = 0; i <= n; i++) {
        // sum = sum + i;
        sum += i;
    }

    cout << sum << endl;
    
    /* Output: 
    Enter the value of n: 5
    15
    */
}