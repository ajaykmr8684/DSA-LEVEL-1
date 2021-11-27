/*
Find Element in an Array


*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];


    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int s;
    cin >> s;
    bool res = false;
    int index = 0;

    for (int i = 0; i < n; ++i ) {

        if (arr[i] == s) {
            res = true;
            index = i;
            break;
        }
    }

    if (res == true) {
        cout << index;

    } else {
        cout << -1;
    }


}











