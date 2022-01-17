/*
Quick Sort

*/

#include<bits/stdc++.h>
using namespace std;



void swap(vector<int>& arr, int i, int j) {
	cout << "Swapping " << arr[i] << " and " << arr[j] << endl;
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(vector<int>& arr, int pivot, int lo, int hi) {
	cout << "pivot -> " << pivot << endl;
	int curr = lo;
	int prev = lo - 1;
	while (curr <= hi) {
		if (arr[curr] <= pivot) {
			prev++;
			swap(arr, curr, prev);
		}
		curr++;
	}
	cout << "pivot index -> " << prev << endl;
	return prev;
}

void quicksort(vector<int>& arr, int lo, int hi) {
	// write your code here
	if ( lo > hi) {
		return;
	}

	int pi = arr[hi];
	pi = partition(arr, pi, lo, hi);

	quicksort(arr, lo, pi - 1);
	quicksort(arr, pi + 1, hi);
}

void print(vector<int> arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int pivot;
	cin >> pivot;

	quicksort(arr, 0, n - 1);
	print(arr, n);
}