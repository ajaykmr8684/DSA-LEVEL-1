/*
Any Base to Any

First convert that number to Dec and then again dec to your desired base.




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


int AnyToAny(int n, int b1, int b2) {

    int dec = AnyToDec(n, b1);
    int res = DecToAny(dec, b2);

    return res;

}



int main() {
    int n;
    int b1;
    int b2;
    cin >> n;
    cin >> b1;
    cin >> b2;
    int res = AnyToAny(n, b1, b2);
    cout << res << endl;
}














