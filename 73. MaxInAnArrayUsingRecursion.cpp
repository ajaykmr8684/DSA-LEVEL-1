/*
Max in an array using recursion
*/


#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int idx, int n) {
	// write your code here
	if (idx == n - 1) {
		return arr[idx];
	}

	int maxxy = max(arr, idx + 1, n);
	if (maxxy > arr[idx]) {
		return maxxy;
	} else {
		return arr[idx];
	}





}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int p = max(arr, 0, n);
	cout << p << endl;
}








