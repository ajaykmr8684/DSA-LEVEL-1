#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;
    int node = 0;

    while (temp) {
        temp = temp / 10;
        node++;
    }

    int div = (int) pow(10, node - 1);



    while (div) {

        int val = n / div;
        cout << val << endl;

        n = n % div;

        div = div / 10;


    }

}