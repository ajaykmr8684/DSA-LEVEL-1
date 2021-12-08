/*

Saddle point
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
	int noSaddle = true;
	for (int i = 0; i < n; ++i) {

		int svj = 0;
		for (int j = 1; j < n; ++j) {
			if (arr[i][j] < arr[i][svj]) {
				svj = j;
			}
		}

		bool flag = true;
		for (int k = 0; k < n; ++k) {
			if (arr[k][svj] > arr[i][svj]) {
				flag = false;
				break;
			}
		}

		if (flag == true) {

			noSaddle = false;
			cout << arr[i][svj] << endl;
			break;

		}


	}



	if (noSaddle) {
		cout << "Invalid input" << endl;
	}













}










