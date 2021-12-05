/*

Multiplication of 2 2D arrays.
*/


#include <bits/stdc++.h>
using namespace std;


int main() {

	int n1, m1;
	cin >> n1 >> m1;

	int arr1[n1][m1];

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			cin >> arr1[i][j];
		}
	}

	int n2, m2;
	cin >> n2 >> m2;

	int arr2[n2][m2];

	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			cin >> arr2[i][j];
		}
	}


	if (m1 != n2) {
		cout << "Invalid input" << endl;
	} else {
		int res[n1][m2];

		for (int i = 0; i < n1; ++i) {
			for (int j = 0; j < m2; ++j) {
				int sum = 0;
				for (int k = 0; k < m1; ++k) {
					sum += arr1[i][k] * arr2[k][j];
				}

				res[i][j] = sum;

			}
		}

		for (int i = 0; i < n1; ++i) {
			for (int j = 0; j < m2; ++j) {
				cout << res[i][j] << "\t";

			}
			cout << endl;
		}
	}










}
