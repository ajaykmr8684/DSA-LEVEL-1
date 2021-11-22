/*

PATTERN-22

*   *   *   *   *   *   *
    *   *   *   *   *
        *   *   *
            *
        *       *
    *               *
*   *   *   *   *   *   *




*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int stars = n;
    int spaces = 0;

    for (int i = 0; i < n; ++i) {


        for (int j = 0; j < spaces; ++j) {
            cout << "\t";
        }
        for (int j = 0; j < stars; ++j) {

            if (i > n / 2 && i < n - 1 && j > 0 && j < stars - 1 ) {
                cout << "\t";
            } else {
                cout << "*\t";
            }

        }

        if ( i < n / 2) {
            stars = stars - 2;
            spaces++;
        } else {
            stars = stars + 2;
            spaces--;
        }

        cout << endl;
    }

}


















