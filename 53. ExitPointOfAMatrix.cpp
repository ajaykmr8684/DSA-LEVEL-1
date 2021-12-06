/*

Exit Point of a matrix
*/


#include <bits/stdc++.h>
using namespace std;


int main() {

	int n, m;
	cin >> n >> m;

	int arr[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int i = 0;
	int j = 0;
	int dir = 0;

	while (true) {
		dir = (dir + arr[i][j]) % 4;

		if (dir == 0) { //e
			j++;
		} else if (dir == 1) { //s
			i++;
		} else if (dir == 2) { //w
			j--;
		} else if (dir == 3) { //n
			i--;
		}

		if (i < 0) {
			i++;
			break;
		} else if (j < 0) {
			j++;
			break;
		} else if ( i == n) {
			i--;
			break;
		} else if ( j == m) {
			j--;
			break;
		}
	}




	cout << i << endl;
	cout << j << endl;






}










