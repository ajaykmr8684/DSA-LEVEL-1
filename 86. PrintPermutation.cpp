/*
Print Permutation Using recursion

*/

#include <bits/stdc++.h>
using namespace std;


void printPermutations(string str, string asf) {
	// write your code here
	if (str.length() == 0) {
		cout << asf << endl;
		return;
	}


	for (int i = 0; i < str.length(); ++i) {
		char c = str[i];
		string lPart = str.substr(0, i);
		string rPart = str.substr(i + 1);
		string fullString = lPart + rPart;
		printPermutations(fullString, asf + c);
	}


}

int main() {
	string str;
	cin >> str;
	printPermutations(str, "");

}