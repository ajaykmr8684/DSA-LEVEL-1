/*
Print subsequence

Here it's a better way for subsequence question because we are not using extra space
like a vector or an array to save each iteration, but this time we are just printing
it out instead of saving it.



*/


#include <bits/stdc++.h>
using namespace std;


#include <iostream>
using namespace std;

void printSS(string ques, string ans) {
	// write your code here
	if (ques.length() == 0) {
		cout << ans << endl;
		return;
	}


	char c = ques[0];
	string ss = ques.substr(1);

	printSS(ss, ans + c);
	printSS(ss, ans + "");

}

int main() {
	string str;
	cin >> str;
	printSS(str, "");
}