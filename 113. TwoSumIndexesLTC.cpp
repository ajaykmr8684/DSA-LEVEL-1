/*
Find Two sum indexes

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findTwoSum(vector<int> arr, int t) {

	vector <int> res;
	unordered_map<int, int> umap;

	for (int i = 0; i < arr.size() - 1; ++i) {
		if (umap.find(t - arr[i]) != umap.end() ) {
			auto p = umap.find(t - arr[i]);
			res.push_back(umap[t - arr[i]]);
			res.push_back(i);
			return res;
		}

		umap[arr[i]] = i;
	}

	return res;
}


int main() {

	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int target;
	cin >> target;

	vector<int> ng;
	ng = findTwoSum(arr, target);
	cout << "[";
	for (int i = 0; i < ng.size(); ++i) {
		if (i != ng.size() - 1) {
			cout << ng[i] << ", ";
		} else {
			cout << ng[i];
		}
	}

	cout << "]";

}