/*

Queue to stack adaptar - Pop Efficient

*/

#include<bits/stdc++.h>
using namespace std;

class QueueToStackAdapter {
public:
	queue<int> mainQ;
	queue<int> helperQ;

	int size() {
		return mainQ.size();
	}

	void push(int data) {
		if (mainQ.size() == 0) {
			mainQ.push(data);
			return;
		}
		while (mainQ.size() > 0) {
			int f = mainQ.front();
			mainQ.pop();
			helperQ.push(f);
		}
		mainQ.push(data);
		while (helperQ.size() > 0) {
			int f = helperQ.front();
			helperQ.pop();
			mainQ.push(f);
		}
	}

	int top() {
		int rem = mainQ.front();
		return rem;
	}

	int pop() {
		int rem = mainQ.front();
		mainQ.pop();
		return rem;
	}
};

int main() {
	QueueToStackAdapter st;
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
		cin >> str;
	}
	return 0;
}
