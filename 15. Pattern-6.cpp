/*

PATTERN-6

*** ***
**   **
*     *
**   **
*** ***




*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;
    int spaces = 1;
    int stars = n / 2 + 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < stars; ++j ) {
            cout << "*";
        }

        for (int s = 0; s < spaces; ++s) {
            cout << " ";
        }

        for (int x = 0; x < stars; ++x ) {
            cout << "*";
        }

        if (i < n / 2) {
            stars--;
            spaces = spaces + 2;
        } else {
            stars++;
            spaces = spaces - 2;
        }

        cout << endl;
    }





}













