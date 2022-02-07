/*
Minimum stack with constant space

*/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
	stack<int> data;
	int minVal;


public:
	int size() {
		return data.size();
	}

public:
	void push(int val) {
		if (size() == 0) {
			minVal = val;
			data.push(val);
		}
		else if (val >= minVal) {
			data.push(val);
		}
		else {
			data.push(val + val - minVal); // encodings
			minVal = val;
		}
	}

public:
	int pop() {
		if (size() == 0) {
			cout << "Stack underflow" << endl;
			return -1;
		}
		else {
			int val = data.top();
			data.pop();

			if (val >= minVal) {
				int v2r = val;
				return v2r;
			}
			else {
				int v2r = minVal;
				minVal = 2 * minVal - val;
				return v2r;
			}
		}
	}

public:
	int top() {
		if (size() == 0) {
			cout << "Stack underflow" << endl;
			return -1;
		}
		else {
			int val = data.top();
			if (val >= minVal) {
				return val;
			}
			else {
				return minVal;
			}
		}
	}

public:
	int min() {
		if (size() == 0) {
			cout << "Stack underflow" << endl;
			return -1;
		}
		else {
			return minVal;
		}
	}

};


int main() {
	MinStack st;

	string str;
	cin >> str;

	while (str != "quit") {

		if (str == "push") {
			int val;
			cin >> val;
			st.push(val);
		}
		else if (str == "pop") {
			int val = st.pop();
			if (val != -1) {
				cout << val << endl;
			}
		}
		else if (str == "top") {
			int val = st.top();
			if (val != -1) {
				cout << val << endl;
			}
		}
		else if (str == "size") {
			cout << st.size() << endl;
		}
		else if (str == "min" ) {
			int val = st.min();
			if (val != -1) {
				cout << val << endl;
			}
		}

		cin >> str;

	}

}