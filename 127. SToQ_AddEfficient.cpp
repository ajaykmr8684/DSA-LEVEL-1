/*

Stack to Queue adaptar - Add Efficient

*/

#include<bits/stdc++.h>
using namespace std;

class StackToQueueAdapter {
public:
	stack<int> mainS;
	stack<int> helperS;

	int size() {
		return mainS.size();
	}

	void add(int data) {
		mainS.push(data);
	}

	int peek() {
		if (mainS.size() == 0) {
			cout << "Queue underflow" << endl;
			return -1;
		}
		while (mainS.size() > 1) {
			int t = mainS.top();
			mainS.pop();
			helperS.push(t);
		}
		int rem = mainS.top();
		mainS.pop();
		helperS.push(rem);
		while (helperS.size() > 0) {
			int t = helperS.top();
			helperS.pop();
			mainS.push(t);
		}
		return rem;
	}

	int remove() {
		if (mainS.size() == 0) {
			cout << "Queue underflow" << endl;
			return -1;
		}
		while (mainS.size() > 1) {
			int t = mainS.top();
			mainS.pop();
			helperS.push(t);
		}
		int rem = mainS.top();
		mainS.pop();
		while (helperS.size() > 0) {
			int t = helperS.top();
			helperS.pop();
			mainS.push(t);
		}
		return rem;
	}
};

int main() {
	StackToQueueAdapter q;
	string str;
	cin >> str;

	while (str != "quit") {
		if (str == "add") {
			int val;
			cin >> val;
			q.add(val);
		}
		else if (str == "remove") {
			int val = q.remove();
			if (val != -1) {
				cout << val << endl;
			}
		}
		else if (str == "peek") {
			int val = q.peek();
			if (val != -1) {
				cout << val << endl;
			}
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		cin >> str;
	}
	return 0;
}