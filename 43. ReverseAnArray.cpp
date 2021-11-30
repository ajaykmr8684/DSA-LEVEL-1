/*
Reverse an array

*/

#include <bits/stdc++.h>
using namespace std;


void reverse(int* arr, int n) {
    // write your code here

    int i = 0;
    int j = n - 1;

    while ( i < j) {

        swap(arr[i], arr[j]);

        i++;
        j--;
    }



}

void display(int* arr, int n) {
    for (int i = 0 ; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr, n);
    display(arr, n);
}











