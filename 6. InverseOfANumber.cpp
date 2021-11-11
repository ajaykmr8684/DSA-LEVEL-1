#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int count = 1;

    while (n) {


        int temp = n % 10;


        sum += count * pow(10, temp - 1);

        count++;


        n = n / 10;


    }

    cout << sum << endl;

}
