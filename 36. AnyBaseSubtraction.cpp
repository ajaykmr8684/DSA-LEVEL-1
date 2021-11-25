/*
Any base subraction



*/

#include <bits/stdc++.h>
using namespace std;


int getDifference(int b, int n1, int n2) {
    // write your code here

    int br = 0;
    int power = 0;
    int sub = 0;

    while ( n2 > 0) {
        int v1 = n1 % 10;
        int v2 = n2 % 10;

        n1 = n1 / 10;
        n2 = n2 / 10;

        int d = 0;
        v2 = v2 + br;


        if ( v2 >= v1) {
            br = 0;
            d = v2 - v1;


        } else {
            br = -1;
            d = v2 + b - v1;

        }

        sub = sub + d * pow(10, power) ;
        power++;
    }

    return sub;

}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getDifference(b, n1, n2);
}











