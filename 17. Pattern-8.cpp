/*

PATTERN-8

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

    int spaces = n - 1;
    int stars = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < spaces; ++j) {
            cout << "\t";
        }
        for (int s = 0; s < stars; ++s) {
            cout << "*\t";
        }

        spaces--;
        cout << endl;
    }


}













