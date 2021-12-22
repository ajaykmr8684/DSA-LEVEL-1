/*
Get KPC
*/


#include <bits/stdc++.h>
using namespace std;

vector <string > gv { ".;", //0
	"abc", //1
	"def", //2
	"ghi", //3
	"jkl", //4
	"mno", //5
	"pqrs", //6
	"tu", //7
	"vwx", //8
	"yz"}; //9

//[tv, tw, tx, uv, uw, ux]

vector<string> getKPC(string s) {
	//Write your code here

	if ( s.length() == 0) {
		vector <string > modifiedForZero;
		modifiedForZero.push_back("");
		return modifiedForZero;
	}

	char c = s[0];
	string ss = s.substr(1);

	vector <string> modified = getKPC(ss);

	string chstring = gv[c - '0'];

	vector<string> final;

	for (int i = 0; i < chstring.length(); ++i) {
		char ch = chstring[i];
		for (auto x : modified) {
			final.push_back(ch + x);
		}

	}

	return final;


}


int main() {
	string s;
	cin >> s;
	vector<string> ans = getKPC(s);
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