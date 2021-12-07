/*

Rotate by 90' Matrix
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

	for (int i = 0; i < n; ++i ) {
		for (int j = i; j < n; ++j) {
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}


	for (int i = 0; i < n; ++i) {
		int left = 0;
		int right = n - 1;

		while (left < right) {
			int temp = arr[i][left];
			arr[i][left] = arr[i][right];
			arr[i][right] = temp;
			left++;
			right--;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}






}










