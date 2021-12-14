/*
Print Fcatorial Using Recursion
*/


#include <bits/stdc++.h>
using namespace std;



int solve(int n) {

	if (n == 1) {
		return 1;
	}

	int fx = solve(n - 1);
	int x = n * fx;
	return x;


}


int main()
{
	int n;
	cin >> n;
	cout << solve(n);
}













