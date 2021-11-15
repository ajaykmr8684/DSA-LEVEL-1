/*

PATTERN-10

*               *
    *       *
        *
    *       *
*               *






*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    int os = n / 2;
    int is = -1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < os; ++j) {
            cout << "\t";
        }

        cout << "*";

        for (int j = 0; j < is; ++j) {
            cout << "\t";
        }

        if (i > 1 && i < n) {
            cout << "*";
        }

        if (i > n / 2) {
            is = is + 2;
            os++;
        } else {

            is = is - 2;
            os--;

        }
    }
}













