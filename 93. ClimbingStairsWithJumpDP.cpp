/*
Climbing Stairs With Jumps using DP

*/

#include<bits/stdc++.h>
using namespace std;


int cs(int arr[], int n) {
	// write your code here



	vector<int> dp(n + 1, 0);
	dp[n] = 1;

	for (int i = n - 1; i >= 0; --i) {
		for (int j = 1; j <= arr[i] && i + j < dp.size(); ++j) {
			dp[i] += dp[i + j];
		}
	}



	return dp[0];
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	cout << cs(arr, n) << endl;
}