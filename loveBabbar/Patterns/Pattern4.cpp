#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    /* Output: 7
    7654321
    7654321
    7654321
    7654321
    7654321
    7654321
    7654321
    */

    while(i <= n) {

        int j = 1;

        while(j <= n) {

            cout << n - j + 1; // formula for reverting
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }

}