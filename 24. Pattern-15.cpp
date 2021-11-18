/*

PATTERN-15

        1
    2   3   2
3   4   5   4   3
    2   3   2
        1


*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int stars = 1;
    int spaces = n / 2;
    int number = 1;

    for (int i = 1; i <= n; ++i) {


        for (int j = 0; j < spaces; ++j) {
            cout << "\t";
        }

        int x = number;

        for (int s = 0; s < stars; ++s) {


            cout << x << "\t";

            if (s < stars / 2) {
                x++;
            } else {
                x--;
            }


        }





        if (i <= n / 2) {
            stars = stars + 2;
            spaces--;
            number++;

        } else {
            stars = stars - 2;
            spaces++;
            number--;


        }

        cout << endl;
    }




}













