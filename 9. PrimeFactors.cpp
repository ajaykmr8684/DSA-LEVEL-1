#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= sqrt(n); ++i) {
        while (n % i == 0) {
            n = n / i;
            cout << i << " ";
        }
    }

    if (n != 1) {
        cout << n;
    }




}