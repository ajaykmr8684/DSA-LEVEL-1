/*

PATTERN-4

*   *   *   *   *
    *   *   *   *
        *   *   *
            *   *
                *


*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {

        for (int m = 0; m < i  ; ++m ) {
            cout << "\t";
        }

        for (int j = 0; j < n - i; ++j ) {
            cout << "*\t";
        }

        cout << endl;
    }




}













