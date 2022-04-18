/*
Max Path sum

Again the changes are in Height code. Where instead counting the max height, we
are calculating the max path from each node.

For eg:
			10
            .
            .
	     	7
	    .     .
    .           .
 4	              5        => 7 +4 = 11 and 7 + 5 = 12 => max(11,12) => 12 and now it

 will return 12 to upper node with the value 10.
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
	int maxPathSum(TreeNode* root) {
		int maxi = INT_MIN;
		MaxPathSum(root, maxi);
		return maxi;

	}

	int MaxPathSum(TreeNode *node, int &maxi) {
		if (node == NULL) {
			return 0;
		}

		int lh = max(0, MaxPathSum(node->left, maxi));
		int rh = max(0, MaxPathSum(node->right, maxi));

		maxi = max(maxi, lh + rh + node->val);
		return node->val + max(lh, rh);
	}
};