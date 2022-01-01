/*
N Queens

*/

#include<bits/stdc++.h>
using namespace std;

//function to display the 2-d array
void display(vector<vector<int>>& chess) {
	for (int i = 0; i < chess.size(); i++) {
		for (int j = 0; j < chess.size(); j++) {
			cout << chess[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void printKnightsTour(vector<vector<int>>& chess, int r, int c, int upcomingMove) {
	//write your code here
	if (r < 0 || c < 0 || r >= chess.size() || c >= chess.size() || chess[r][c] > 0) {
		return;
	} else if (upcomingMove == chess.size() * chess.size()) {
		chess[r][c] = upcomingMove;
		display(chess);
		chess[r][c] = 0;
		return;
	}






	chess[r][c] = upcomingMove;
	printKnightsTour(chess, r - 2, c + 1, upcomingMove + 1);
	printKnightsTour(chess, r - 1, c + 2, upcomingMove + 1);
	printKnightsTour(chess, r + 1, c + 2, upcomingMove + 1);
	printKnightsTour(chess, r + 2, c + 1, upcomingMove + 1);
	printKnightsTour(chess, r + 2, c - 1, upcomingMove + 1);
	printKnightsTour(chess, r + 1, c - 2, upcomingMove + 1);
	printKnightsTour(chess, r - 1, c - 2, upcomingMove + 1);
	printKnightsTour(chess, r - 2, c - 1, upcomingMove + 1);
	chess[r][c] = 0;




}

int main() {

	int n;
	cin >> n;

	int r, c;
	cin >> r >> c;

	vector<vector<int> > chess(n, vector<int>(n));

	printKnightsTour(chess, r, c, 1);




}