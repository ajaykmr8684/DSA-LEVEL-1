/*
Print increasing and decreasing using recursion
*/


#include <bits/stdc++.h>
using namespace std;

void printDecreasing(int n) {
    // write your code here
    if (n == 0) {
        return;
    }

    cout << n << endl;
    printDecreasing(n - 1);
    cout << n << endl;


}

int main() {
    int n;
    cin >> n;
    printDecreasing(n);
}
