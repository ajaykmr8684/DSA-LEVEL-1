/*

PATTERN-10

        *
    *       *
*               *
    *       *
        *



*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;
    int c = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= c; ++j) {
            cout << j;
            j++;
        }

        cout << endl;
    }


}














