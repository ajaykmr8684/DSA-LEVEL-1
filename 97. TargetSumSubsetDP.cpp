/*
Target Sum Set DP

*/

#include<bits/stdc++.h>
using namespace std;


void targetSumSubset(int n, vector<int> arr, int tar) {


	vector <vector <bool>> dp(n + 1, vector<bool>(tar + 1));

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= tar; ++j) {
			if (i == 0 && j == 0) {
				dp[i][j] = true;
			} else if (i == 0) {
				dp[i][j] = false;
			} else if (j == 0) {
				dp[i][j] = true;
			} else {
				if (dp[i - 1][j] == true) {
					dp[i][j] = true;
				} else {
					int val = arr[i - 1];
					if ( j >= val) {
						if (dp[i - 1][j - val] == true) {
							dp[i][j] = true;
						}

					}
				}
			}
		}
	}

	cout << boolalpha << dp[arr.size()][tar] << endl;




}


int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}
	int tar;
	cin >> tar;
	targetSumSubset(n, arr, tar);

}