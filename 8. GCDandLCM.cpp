#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> m >> n;

    int on1 = m;
    int on2 = n;

    while (n) {
        int emp = 0;
        emp = m % n;
        m = n;
        n = emp;

    }

    int gcd = m;
    int lcm = (on1 * on2) / gcd;

    cout << gcd << endl;
    cout << lcm << endl;



}

