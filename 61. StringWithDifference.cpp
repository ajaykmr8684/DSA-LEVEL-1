/*

String With Difference Of Every Two Consecutive Characters
*/


#include <bits/stdc++.h>
using namespace std;

void solve(string str)
{



	string s;
	s =  str[0];
	for (int i = 1; i < str.length(); ++i) {
		char c = str[i];
		int minus = 0;
		minus = str[i] - str[i - 1];

		s += to_string(minus) + c;


	}

	cout << s;



}

int main()
{
	string str;
	getline(cin, str);
	solve(str);
}













