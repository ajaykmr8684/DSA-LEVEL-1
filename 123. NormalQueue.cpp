/*
Normal Queue

*/

#include<bits/stdc++.h>
using namespace std;

class CustomQueue {
public:
	int* arr;
	int sizeQ;
	int front;
	int arrSize;

	CustomQueue(int cap) {
		sizeQ = 0;
		front = 0;
		arr = new int[cap];
		arrSize = cap;
	}

	int size() {
		return sizeQ;
	}

	void add(int data) {
		if (sizeQ == arrSize) {
			cout << "Queue overflow" << endl;
			return;
		}
		int idx = (front + sizeQ) % (arrSize);
		arr[idx] = data;
		sizeQ++;
	}

	int peek() {
		if (sizeQ == 0) {
			cout << "Queue underflow" << endl;
			return -1;
		}
		else {
			int val = arr[front];
			return val;
		}
	}

	int remove() {
		if (sizeQ == 0) {
			cout << "Queue underflow" << endl;
			return -1;
		}
		else {
			int rem = arr[front];
			front = (front + 1) % arrSize;
			sizeQ--;
			return rem;
		}
	}

	void display() {
		for (int i = 0 ; i < sizeQ ; i++) {
			int idx = (front + i) % arrSize;
			cout << arr[idx] << " ";
		}
		cout << endl;
	}
};

int main() {
	int n;
	cin >> n;
	CustomQueue q(n);
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
		else if (str == "display") {
			q.display();
		}
		cin >> str;
	}
	return 0;
}


