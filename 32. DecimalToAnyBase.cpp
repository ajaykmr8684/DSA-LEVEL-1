/*

Decimal to Any Base




*/

#include <bits/stdc++.h>
using namespace std;


int DecToAny(int n, int b) {

    int sum = 0;
    int raiseToPower = 0;

    while (n) {
        int val = n % b;
        sum = sum +  (val *  pow(10, raiseToPower));
        n = n / b;
        raiseToPower++;

    }

    return sum;

}
int main() {
    int n;
    int b;
    cin >> n;
    cin >> b;


    int res = DecToAny(n, b);
    cout << res << endl;
}















