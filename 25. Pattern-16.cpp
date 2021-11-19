/*

PATTERN-16

1                                               1
1   2                                       2   1
1   2   3                               3   2   1
1   2   3   4                       4   3   2   1
1   2   3   4   5               5   4   3   2   1
1   2   3   4   5   6       6   5   4   3   2   1
1   2   3   4   5   6   7   6   5   4   3   2   1


*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int stars = 1;
    int spaces = 2 * n - 3;

    for (int i = 1; i <= n; ++i) {
        int number = 1;
        for (int j = 0; j < stars; ++j) {
            cout << number << "\t";
            number++;
        }

        for (int j = 0; j < spaces; ++j) {
            cout << "\t";
        }

        if ( i == n) {
            stars--;
            number--;
        }

        for (int j = 0; j < stars; ++j) {
            number--;
            cout << number << "\t";
        }



        stars++;
        spaces -= 2;

        cout << endl;
    }




}













