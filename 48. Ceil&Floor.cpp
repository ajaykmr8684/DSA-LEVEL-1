/*

Denomination Problem
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
	int p;
	cin >> p;


	int lo = 0;
	int hi = n - 1;
	int floorx = -1;
	int ceilx = -1;


	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (arr[mid] == p) {
			cout << arr[mid] << endl;
		} else if (arr[mid] < p) {
			lo = mid + 1;
			floorx = arr[mid];
		} else {
			hi = mid - 1;
			ceilx = arr[mid];
		}
	}

	cout << ceilx << endl;
	cout << floorx << endl;




}
