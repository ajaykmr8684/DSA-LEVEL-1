/*
Subset Problem

*/

#include <bits/stdc++.h>
using namespace std;

int binaryconv(int n) {
    int res = 0;
    int power = 0;

    while (n) {
        int val = n % 2;
        n = n / 2;
        res += val * pow(10, power);
        power++;

    }

    return res;
}



int main() {

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int subsets = pow(2, n);

    for (int i = 0; i < subsets; ++i ) {
        int bin = binaryconv(i);
        int div = pow(10, n - 1);

        for (int j = 0; j < n; ++j) {
            int ans = bin / div;
            int r = bin % div;

            if (ans == 0) {
                cout << "-\t";
            } else {
                cout << arr[j] << "\t";

            }

            bin = r;
            div = div / 10;


        }

        cout << endl;


    }





}