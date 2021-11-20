/*

PATTERN-18

*   *   *   *   *   *   *
    *               *
        *       *
            *
        *   *   *
    *   *   *   *   *
*   *   *   *   *   *   *


*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int os = 0;
    int is = 0;
    int stars = n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < os; ++j) {
            cout << "\t";
        }

        for (int j = 0; j < stars; ++j) {

            if ( i > 0 && i < n / 2 && j > 0 && j < stars - 1) {
                cout << "\t";
            } else {
                cout << "*\t";
            }




        }



        cout << endl;


        // for(int j =0; j< is; ++j){
        //     cout << "\t";
        // }

        if (i < n / 2) {
            stars = stars - 2;
            os++;
        } else {
            stars = stars + 2;
            os--;

        }




    }


}


















