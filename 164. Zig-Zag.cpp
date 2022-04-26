/*
Zig-Zag or Spiral traversal in BT

*/

#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		vector<vector<int>> res;
		if (root == NULL) {
			return res;
		}



		queue<TreeNode*> q;
		q.push(root);
		bool leftToRight = true;

		while (!q.empty()) {

			int size = q.size();
			vector<int> temp(size);

			for (int i = 0; i < size; ++i) {
				TreeNode *node = q.front();
				q.pop();

				int index = (leftToRight) ? i : (size - 1 - i);

				temp[index] = node->val;

				if (node->left != NULL) {
					q.push(node->left);
				}

				if (node->right != NULL) {
					q.push(node->right);
				}
			}

			leftToRight = !leftToRight;
			res.push_back(temp);

		}

		return res;
	}
};