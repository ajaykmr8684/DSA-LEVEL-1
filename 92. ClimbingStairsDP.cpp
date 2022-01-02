/*
Climbing stairs

*/

#include<bits/stdc++.h>
using namespace std;
int ct = 0;

// int cs(int n, vector<int>dp) {
// 	// write your code here

// 	if (n < 0) {

// 		return 0;
// 	}

// 	if (n == 0) {

// 		return 1;

// 	}

// 	if (dp[n] > 0) {
// 		return dp[n];
// 	}

// 	int c1 = cs(n - 1, dp);
// 	int c2 = cs(n - 2, dp);
// 	int c3 = cs(n - 3, dp);
// 	int sum = c1 + c2 + c3;
// 	dp[n] = sum;

// 	return sum;


//}

int findPathsUsingTabulation(int n, vector<int>dp) {


	dp[0] = 1;
	for (int i = 1; i <= n; ++i) {

		if (i == 1) {
			dp[i] = dp[i - 1];
		} else if (i == 2) {
			dp[i] = dp[i - 1] + dp[i - 2];
		} else {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}

	}

	return dp[n];
}



int main() {
	int n;
	cin >> n;
	vector<int>dp(n, 0);
	//cout << cs(n, dp);
	cout << findPathsUsingTabulation(n, dp);
}