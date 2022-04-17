/*
check BT is balanced or not

Performed using height of a tree, the whole code is similiar
but there are extra 2 lines added.

1. if(lh == -1 || rh == -1) return -1
2. if(abs(rh -lh) == -1) return -1;
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
	bool isBalanced(TreeNode* root) {
		return dfs(root) != -1;

	}

	int dfs(TreeNode *root) {
		if (root == NULL) {
			return 0;
		}

		int lh = dfs(root->left);
		if (lh == -1) return -1;
		int rh = dfs(root->right);
		if (rh == -1) return -1;
		int gap = abs(rh - lh);

		if (gap > 1) return -1;
		return 1 + max(lh, rh);
	}
};