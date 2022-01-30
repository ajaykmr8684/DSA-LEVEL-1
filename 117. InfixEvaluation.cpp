/*
Infix evaluation

*/

#include<bits/stdc++.h>
using namespace std;


// To set the priorities of operators
/*
+ : 1
- : 1
* : 2
/ : 2
*/

int setPrecedenece(char c) {
	if ( c == '+') {
		return 1;
	} else if ( c == '-') {
		return 1;
	} else if (c == '*') {
		return 2;
	} else {
		return 2;
	}
}

int compute(int v1, int v2, char c) {
	if (c == '+') {
		return v1 + v2;
	} else if ( c == '-') {
		return v1 - v2;
	} else if (c == '*') {
		return v1 * v2;
	} else {
		return v1 / v2;
	}
}

//Agenda to solve

/*
	step 1: To make two stacks for operands and operands
	step 2: if the char is operands, push it to operand stack and vice-versa
	step 3: if some operator has a greater or equal precedence than the element
	coming in stack, then we will pop. Pop based on 3 conditions
	i. St > 0
	ii. we find an opening bracket
	iii. it finds a smaller operand.
	step 4: Similarly the case applies for a closing bracket where it will
	pop till it find the opening bracket.
	step 5: Compute based on the precedence and operations.
*/

int evaluatePrifix(string s) {
	//todo

	stack <int> allies;
	stack <char> axis;

	for (int i = 0; i < s.length(); ++i) {
		char c = s[i];

		if (c == '(') {
			axis.push(c);
		} else if (isdigit(c)) {
			allies.push(c - '0');
		} else if ( c == '+' || c == '-' || c == '*' || c == '/') {
			while (axis.size() > 0 && axis.top() != '(' && setPrecedenece(c) <= setPrecedenece(axis.top())) {
				int v2 = allies.top();
				allies.pop();
				int v1 = allies.top();
				allies.pop();
				char op = axis.top();
				axis.pop();

				int ans = compute(v1, v2, op);
				allies.push(ans);
			}
			axis.push(c);
		} else if (c == ')') {
			while (axis.size() > 0 && axis.top() != '(') {
				int v2 = allies.top();
				allies.pop();
				int v1 = allies.top();
				allies.pop();
				char op = axis.top();
				axis.pop();

				int ans = compute(v1, v2, op);
				allies.push(ans);
			}
			if (axis.size() > 0) {
				axis.pop();
			}
		}
	}

	while (axis.size() > 0) {
		int v2 = allies.top();
		allies.pop();
		int v1 = allies.top();
		allies.pop();
		char op = axis.top();
		axis.pop();

		int ans = compute(v1, v2, op);
		allies.push(ans);
	}

	int xxx = allies.top();
	allies.pop();

	return xxx;
}

int main() {

	string s;
	getline(cin, s);


	int ans = evaluatePrifix(s);
	cout << ans;

}