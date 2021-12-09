/*

Find All Palindrome of string
*/


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	int i = 0;
	int j = s.length() - 1;

	while (i < j) {

		if (s[i] != s[j]) {
			return false;
		}

		i++;
		j--;



	}

	return true;
}


void printallpralindrome(string str)
{
	//write your code here
	for (int i = 0; i < str.length(); ++i) {
		for (int j = 1; j + i <= str.length(); j++) {
			// string ss =  ;
			if (isPalindrome(str.substr(i, j))) {
				cout << str.substr(i, j) << endl;
			}
		}
	}
}





int main() {



	string str;
	getline(cin, str);
	printallpralindrome(str);
	return 0;




}










