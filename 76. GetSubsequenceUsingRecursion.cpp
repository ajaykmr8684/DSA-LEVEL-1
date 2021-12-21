/*
Get subsequence
*/


#include <bits/stdc++.h>
using namespace std;

vector<string> gss(string s) {
	// write your code here

	if (s.length() == 0) {
		vector <string> modifiedForZero;

		modifiedForZero.push_back("");

		return modifiedForZero;


	}



	char c = s[0];
	string ss = s.substr(1);
	vector<string> modified = gss(ss);

	vector <string> final;

	for (auto x : modified) {
		final.push_back( "" + x);
	}

	for (auto x : modified) {
		final.push_back( c + x);
	}


	return final;







}

int main() {
	string s;
	cin >> s;
	vector<string> ans = gss(s);
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