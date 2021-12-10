/*

Toggle case
*/


#include <bits/stdc++.h>
using namespace std;

void solve(string str)
{
	//write your code here
	string s;
	for (int i = 0; i < str.length(); ++i) {
		char c = str[i];

		if (c >= 65 && c <= 90) {

			s += tolower(c);

		} else {
			s += toupper(c);
		}
	}

	cout << s;





}




int main()
{
	string str;
	getline(cin, str);
	solve(str);
}













