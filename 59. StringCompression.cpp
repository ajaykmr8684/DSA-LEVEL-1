/*

String compression
*/


#include <bits/stdc++.h>
using namespace std;

void String_compression01(string str)
{
	//write your code here

	string s;
	s = str.at(0);

	for (int i = 1; i < str.length(); ++i) {

		if (str[i] != str[i - 1]) {
			s += str[i];
		}
	}

	cout << s << endl;

}
void String_compression02(string str)
{
	//write your code here

	string s;
	s = str.at(0);
	int ct = 1;

	for (int i = 1; i < str.length(); ++i) {
		if (str[i] == str[i - 1]) {
			ct++;
		} else {
			if (ct > 1) {
				s += to_string(ct);
				ct = 1;
			}
			s += str[i];
		}



	}

	if (ct > 1) {
		s += to_string(ct);
		ct = 1;
	}

	cout << s << endl;

}

int main()
{
	string str;
	getline(cin, str);
	String_compression01(str);
	String_compression02(str);
}













