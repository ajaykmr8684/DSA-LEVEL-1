/*
Climbing Stairs With minimum Jumps using DP

*/

#include<bits/stdc++.h>
using namespace std;


int jumpT(int i, int n, vector<int>& jumps, vector<int>& dp)
{
	// write your code here


	for (int i = n - 1; i >= 0; --i) {

		if (dp[i] == n) {
			dp[i] = 0;
			continue;
		}

		int minx = 30;

		for (int j = 1; j <= jumps[i] && i + j < dp.size(); ++j) {
			int val =  dp[i + j] + 1;
			minx = min(minx, val);
		}


		dp[i] = minx;




	}

	return dp[0];


}

int main() {

	int n;
	cin >> n;

	vector<int> jumps(n);

	for (int i = 0; i < n; i++)
	{
		cin >> jumps[i];
	}

	vector<int> dp(n + 1, 0);

	int ans = jumpT(0, n, jumps, dp);

	if (ans < 30)
		cout << ans;
	else
		cout << "null";
}