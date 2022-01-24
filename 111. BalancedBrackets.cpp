/*
Balanced Brackets using stack

*/

#include<bits/stdc++.h>
using namespace std;

bool checkDuplicateBracket(string s) {
	stack <char> st;

	for (int i = 0; i < s.length(); ++i) {

		if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
			st.push(s[i]);
		} else if (s[i] == ']' || s[i] == ')' || s[i] == '}') {
			if (st.empty()) {
				return false;
			} else {
				if (s[i] == ']') {
					if (st.top() == '[') {
						st.pop();
					}
				} else if (s[i] == '}') {
					if (st.top() == '{') {
						st.pop();
					}
				} else {
					if (st.top() == '(') {
						st.pop();
					}
				}
			}

		}


	}

	if (st.empty()) {
		return true;
	} else {
		return false;
	}



}



int main() {


	string s;
	getline(cin, s);

	cout << boolalpha << checkDuplicateBracket(s);
}