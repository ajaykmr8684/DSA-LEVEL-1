/*

Spiral Problem
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

	int minr = 0;
	int minc = 0;
	int maxr = n - 1;
	int maxc = m - 1;

	int el = n * m;
	int ct = 0;


	//left wall
	while (ct < el) {
		for (int i = minr, j = minc; i <= maxr && ct < el; ++i) {
			cout << arr[i][j] << endl;
			ct++;

		}


		minc++;

		//bottom wall

		for (int i = maxr, j = minc; j <= maxc && ct < el; ++j) {
			cout << arr[i][j] << endl;
			ct++;
		}
		maxr--;



		//right wall

		for (int i = maxr, j = maxc; i >= minr && ct < el; --i) {
			cout << arr[i][j] << endl;
			ct++;
		}
		maxc--;




		//top wall
		for (int i = minr, j = maxc; j >= minc && ct < el; --j) {
			cout << arr[i][j] << endl;
			ct++;
		}
		minr++;



	}









}










