/*
Get Stairs
*/


#include <bits/stdc++.h>
using namespace std;

vector<string> get_stair_paths(int n) {
	//Write your code here

	if (n == 0) {
		vector <string> forZeros;
		forZeros.push_back("");
		return forZeros;
	}


	if (n < 0) {
		vector <string> forZeros;
		return forZeros;

	}



	vector <string> path1 = get_stair_paths(n - 1);
	vector <string> path2 = get_stair_paths(n - 2);
	vector <string> path3 = get_stair_paths(n - 3);

	vector <string> final;

	for (string c : path1) {
		final.push_back( '1' + c);
	}
	for (string c : path2) {
		final.push_back('2' + c );
	}
	for (string c : path3) {
		final.push_back('3' + c);
	}

	return final;



}

int main() {
	int n;
	cin >> n;
	vector<string> ans = get_stair_paths(n);
	int cnt = 0;

	cout << '[';
	for (string str : ans) {
		if (cnt != ans.size() - 1)
			cout << str << ", ";
		else
			cout << str;
		cnt++;
	}
	cout << ']';
}