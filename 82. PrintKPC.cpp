/*
Print KPC

*/


#include <bits/stdc++.h>
using namespace std;


#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf) {
	// write your code here

	if (ques.length() == 0) {
		cout << asf << endl;
		return;
	}


	char c = ques[0];
	string ss = ques.substr(1);
	string ans = codes[c - '0'];
	for (int i = 0; i < ans.length(); ++i) {
		char co = ans[i];
		printKPC(ss, asf + co);
	}

}

int main() {
	string str;
	cin >> str;
	printKPC(str, "");
}