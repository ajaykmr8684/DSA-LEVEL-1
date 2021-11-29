/*
Sum of two arrays

*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n1, n2;
    cin >> n1;
    int arr1[n1];

    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];

    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    int n3 = (n1 > n2) ? n1 : n2;

    int res[n3];

    int c = 0;
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n3 - 1;

    while ( k >= 0) {

        int d = c;

        if ( i >= 0) {
            d -= arr1[i];
        }

        if ( j >= 0) {
            d -= arr2[j];
        }

        c = d / 10;
        d = d % 10;

        res[k] = d;

        i--;
        j--;
        k--;


    }

    if ( c > 0) {
        cout << c << endl;
    }

    for ( auto val : res) {
        cout << val << endl;
    }

}











