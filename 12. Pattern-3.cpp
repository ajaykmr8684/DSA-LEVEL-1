/*

PATTERN-3

    *
   **
  ***
 ****
*****


*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {

        for (int m = 0; m < n - i  ; ++m ) {
            cout << " ";
        }

        for (int j = 0; j < i; ++j ) {
            cout << "*";
        }

        cout << endl;
    }




}






