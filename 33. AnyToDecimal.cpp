/*
Any Base to Decimal




*/

#include <bits/stdc++.h>
using namespace std;


int AnyToDec(int n, int b) {

    int sum = 0;
    int raiseToPower = 0;

    while (n) {
        int val = n % 10;
        sum = sum +  (val *  pow(b, raiseToPower));
        n = n / 10;
        raiseToPower++;

    }

    return sum;

}
int main() {
    int n;
    int b;
    cin >> n;
    cin >> b;


    int res = AnyToDec(n, b);
    cout << res << endl;
}















