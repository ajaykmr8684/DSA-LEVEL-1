/*
Sliding Window Problem

*/

#include<bits/stdc++.h>
using namespace std;


vector<int> ngel(vector<int>arr) {

	stack<int> st;
	vector<int> res(arr.size(), 0);

	st.push(arr.size() - 1);
	res[arr.size() - 1] = arr.size();

	for (int i = arr.size() - 2; i >= 0; --i) {

		while (st.size() > 0 && arr[i] >= arr[st.top()]) {
			st.pop();
		}

		if (st.size() == 0) {
			res[i] = arr.size();
		} else {
			res[i] = st.top();
		}

		st.push(i);
	}

	return res;

}


void slidingWindow(vector<int>arr, int k) {

	vector <int> nge = ngel(arr);
	int j = 0;
	for (int i = 0; i <= arr.size() - k; ++i) {
		if ( j < i) {
			j = i;
		}

		while (nge[j] < i + k) {
			j = nge[j];
		}

		cout << arr[j] << " ";
	}

}


int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;

	// write your code here
	slidingWindow(arr, k);

	return 0;
}