/*
Last Index
*/


#include <bits/stdc++.h>
using namespace std;



int lastIndex(int arr[], int idx, int x, int n) {
	// write your code here

	if (idx == n - 1) {
		return -1;
	}



	int fx = lastIndex(arr, idx + 1, x, n);

	if ( fx == -1) {
		if (arr[idx] == x) {
			return idx;
		} else {
			return -1;
		}
	} else {
		return fx;
	}

}

int main() {
	int n;
	cin >> n;
	int d;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> d;
	int p = lastIndex(arr, 0, d, n);
	cout << p << endl;
}






