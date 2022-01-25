/*
Next greater element

*/

#include<bits/stdc++.h>
using namespace std;

void display(vector<int>a) {
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
}
vector<int> solve(vector<int>arr)
{
	//write your code here

	int n = arr.size();

	stack <int> vals;
	vector <int> res(n, 0);

	vals.push(arr[arr.size() - 1]);
	res[arr.size() - 1] = -1;

	for (int i = arr.size() - 2; i >= 0; --i) {

		while (vals.size() > 0 && arr[i] >= vals.top()) {
			vals.pop();
		}

		if (vals.size() == 0) {
			res[i] = -1;
		} else {
			res[i] = vals.top();
		}

		vals.push(arr[i]);
	}

	return res;
}
int main(int argc, char** argv)
{
	int n;
	cin >> n;
	vector<int>arr(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector<int>nge(n, 0);
	nge = solve(arr);
	display(nge);
	return 0;
}