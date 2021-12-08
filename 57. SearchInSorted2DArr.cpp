/*
Search in sorted 2D array
*/


#include <bits/stdc++.h>
using namespace std;




int main() {

	int n;
	cin >> n;

	int arr[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int find;
	cin >> find;

	int i = 0;
	int j = n - 1;
	int found = false;

	while ( i < n && j >= 0) {

		if (arr[i][j] == find) {
			found = true;
			cout << i << endl;
			cout << j << endl;
			break;
		} else if ( find  < arr[i][j]) {
			j--;
		} else {
			i++;
		}
	}

	if (!found) {
		cout << "Not Found" << endl;
	}





}










