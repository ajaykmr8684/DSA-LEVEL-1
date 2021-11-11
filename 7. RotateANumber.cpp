


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, rot;
    cin >> n >> rot;

    int count = 0;

    int temp = n;

    while (temp) {
        temp = temp / 10;
        count++;
    }

    rot = rot % count;

    if (rot < 0) {
        rot = rot + count;
    }

    int div = 1;
    int multi = 1;
    for (int i = 0; i < count; ++i) {
        if (i < rot) {
            div = div * 10;
        } else {
            multi = multi * 10;
        }
    }

    int remain = n % div;
    int quo = n / div;

    int sol = remain * multi + quo;

    cout << sol << endl;



}













