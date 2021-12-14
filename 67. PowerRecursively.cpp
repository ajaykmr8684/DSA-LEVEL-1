/*

Power recursively
*/


#include <bits/stdc++.h>
using namespace std;



int solve(int n, int m) {

	if (m == 0) {
		return 1;
	}

	int fx = solve(n, m - 1);

	int x = n * fx  ;

	return x;




}


int main()
{
	int n, m;
	cin >> n >> m;

	cout << solve(n, m);
}













