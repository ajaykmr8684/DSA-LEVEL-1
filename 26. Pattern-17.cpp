/*

PATTERN-17

        *
        *   *
*   *   *   *   *
        *   *
        *



*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int spaces = n / 2;
    int stars = 1 ;


    for (int i = 0; i < n; ++i) {


        for (int j = 0; j < spaces; ++j) {

            if ( i == n / 2) {
                cout << "*\t";
            } else {
                cout << "\t";
            }

        }


        for (int j = 0; j < stars; ++j) {
            cout << "*\t";
        }

        // if (i == n / 2) {
        //     stars = n;
        // }



        if ( i < n / 2) {
            stars++;
        } else {
            stars--;

        }

        cout << endl;

    }


}


















