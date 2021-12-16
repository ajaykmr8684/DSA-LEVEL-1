/*

Power Log recursively
*/


#include <bits/stdc++.h>
using namespace std;



int solve(int n, int m) {

	//Base condition
	if (m == 0) {
		return 1;
	}


	//Trust

	int fx = solve(n, m / 2 );
	int x = fx * fx;

	if (m % 2 == 1) {
		x = x * n;
	}

	return x;

}


int main()
{
	int n, m;
	cin >> n >> m;

	cout << solve(n, m);
}













