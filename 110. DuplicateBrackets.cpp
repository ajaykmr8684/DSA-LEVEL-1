/*
Duplicate Brackets using stack

*/

#include<bits/stdc++.h>
using namespace std;

bool checkDuplicateBracket(string s) {
	stack <char> st;

	for (int i = 0; i < s.length(); ++i) {

		if ( s[i] == ')') {

			if (st.top() == '(') {
				return true;
			} else {
				while (st.top() != '(') {
					st.pop();
				}
				st.pop();
			}
		} else {
			st.push(s[i]);
		}

	}

	return false;


}



int main() {


	string s;
	getline(cin, s);

	cout << boolalpha << checkDuplicateBracket(s);
}