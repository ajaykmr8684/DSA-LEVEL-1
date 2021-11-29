/*
Difference of two arrays

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

    int res[n2];

    int i = n1 - 1;
    int j = n2 - 1;
    int k = n2 - 1;
    int borrow = 0;

    while (k >= 0) {
        int diff = arr2[j] - borrow;
        if ( i >= 0 ) {
            diff -= arr1[i];
        }

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        res[k] = diff;

        i--;
        j--;
        k--;
    }

    int idx = 0;
    while (res[idx] == 0) {
        idx++;
    }

    while ( idx < n2) {
        cout << res[idx] << endl;
        idx++;
    }


}











