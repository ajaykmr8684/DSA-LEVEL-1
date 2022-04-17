/*
Diamater of BT: Longest path between two nodes.

Two conditions:
1. It's a longest path between two nodes
2. Path doesn't need to pass through root

Approach: It can be accomplished by height of the tree code.
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
	int diameterOfBinaryTree(TreeNode* root) {
		int diameter = 0;
		findDiam(root, diameter);
		return diameter;

	}

private:
	int findDiam(TreeNode *node, int &diameter) {
		if (node == NULL) {
			return 0;
		}

		int lh = findDiam(node->left, diameter);
		int rh = findDiam(node->right, diameter);

		diameter = max(diameter, lh + rh);

		return 1 + max(lh, rh);

	}
};