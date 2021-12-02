/*
Subarray

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    // write your code here

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int x = i; x <= j; ++x) {
                cout << arr[x] << "\t";
            }

            cout << endl;
        }

    }


}