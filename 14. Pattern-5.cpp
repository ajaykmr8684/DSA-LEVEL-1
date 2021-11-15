/*

PATTERN-5

        *
    *   *   *
*   *   *   *   *
    *   *   *
        *



*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    int st = 1;
    int space = n / 2;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < space; ++j) {
            cout << "\t";
        }
        for (int s = 0; s < st; ++s) {
            cout << "*" << "\t";
        }

        if (i < n / 2) {
            space--;
            st = st + 2;
        } else {
            space++;
            st = st - 2;
        }

        cout << endl;
    }



}













