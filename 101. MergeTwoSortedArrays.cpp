/*
Merge Two sorted Arrays

*/

#include<bits/stdc++.h>
using namespace std;



vector<int> mergeTwoSortedArrays(vector<int> &A, vector<int> &B) {


	int i = 0;
	int j = 0;
	int k = 0;

	vector <int> res;

	while (i < A.size() && j < B.size()) {
		if (A[i] < B[j]) {
			res.push_back(A[i]);
			i++;
			k++;
		} else {
			res.push_back(B[j]);
			j++;
			k++;
		}
	}

	while ( i < A.size()) {
		res.push_back(A[i]);
		i++;
		k++;
	}

	while ( i < B.size()) {
		res.push_back(B[j]);
		j++;
		k++;
	}

	return res;


}

void input(vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cin >> arr[i];
	}
}

void output(vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int n, m;
	cin >> n;
	vector<int> A(n, 0);
	input(A);

	cin >> m;
	vector<int> B(m, 0);
	input(B);

	vector<int> ans = mergeTwoSortedArrays(A, B);
	output(ans);
	return 0;
}