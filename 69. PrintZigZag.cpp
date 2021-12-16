/*

Print Zig-Zag, Helps in understanding multi level recursion and also best example
to understand Euler's Path.
*/


#include <bits/stdc++.h>
using namespace std;



void solve(int n) {
	if (n == 0) {
		return;
	}

	cout << n << " ";
	solve(n - 1);
	cout << n << " ";
	solve(n - 1);
	cout << n << " ";


}


int main()
{
	int n;
	cin >> n;

	solve(n);
}













