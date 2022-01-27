/*
Largest Area Histogram

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElementInRight(vector<int>arr) {
	vector <int> rb(arr.size(), 0);
	stack <int> st;
	st.push(arr.size() - 1);
	rb[arr.size() - 1] = arr.size();


	for (int i = arr.size() - 2; i >= 0; --i) {
		while (st.size() > 0 && arr[i] <= arr[st.top()]) {
			st.pop();
		}

		if (st.size() == 0) {
			rb[i] = arr.size();
		} else {
			rb[i] = st.top();
		}

		st.push(i);
	}

	return rb;
}

vector<int> nextSmallerElementInLeft(vector<int>arr) {
	vector <int> lb(arr.size(), 0);
	stack <int> st;
	st.push(0);
	lb[0] = -1;


	for (int i = 0; i < arr.size(); ++i) {
		while (st.size() > 0 && arr[i] <= arr[st.top()]) {
			st.pop();
		}

		if (st.size() == 0) {
			lb[i] = -1;
		} else {
			lb[i] = st.top();
		}

		st.push(i);
	}

	return lb;
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
	//write your code here



	int max = 0;
	vector<int> nsr = nextSmallerElementInRight(arr);
	vector<int> nsl = nextSmallerElementInLeft(arr);
	for (int i = 0; i < n; ++i) {
		int width = nsr[i] - nsl[i] - 1;
		int area = width * arr[i];

		if (area > max) {
			max = area;
		}
	}

	cout << max;
}