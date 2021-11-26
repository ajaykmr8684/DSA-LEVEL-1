/*
Any base multiplication




*/

#include <bits/stdc++.h>
using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here

    int rv = 0;
    int c = 0;
    int power = 0;

    while (n1 > 0 || n2 > 0 || c > 0 ) {
        int d1 = n1 % 10;
        int d2 = n2 % 10;
        n1 = n1 / 10;
        n2 = n2 / 10;

        int d = d1 + d2 + c;
        c = d / b;
        d = d % b;

        rv += d * pow(10, power);


        power++;

    }

    return rv;


}

int getSingleDigitProduct(int b, int n1, int d2) {
    int ans = 0;
    int power = 0;
    int c = 0;

    while (n1 > 0 || c > 0) {
        int d1 = n1 % 10;
        n1 = n1 / 10;

        int d = d1 * d2 + c;

        c = d / b;

        d = d % b;

        ans = ans + d * pow(10, power);
        power++;
    }
    return ans;
}




int getProduct(int b, int n1, int n2) {
    // write your code here

    int ans = 0;
    int power = 0;

    while (n2 > 0) {
        int d2 = n2 % 10;
        n2 = n2 / 10;

        int singleProductValue = getSingleDigitProduct(b, n1, d2 );
        ans = getSum(b, ans, singleProductValue * pow(10, power) );
        power++;
    }

    return ans;

}











int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getProduct(b, n1, n2) << endl;
}











