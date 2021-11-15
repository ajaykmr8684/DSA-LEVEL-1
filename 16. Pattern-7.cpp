/*

PATTERN-7

*
 *
  *
   *
    *





*/



#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    int space = 0;
    int stars = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < space; ++j) {
            cout << " ";
        }

        for (int s = 0; s < stars; ++s) {
            cout << "*";
        }

        space++;

        cout << endl;
    }


}













