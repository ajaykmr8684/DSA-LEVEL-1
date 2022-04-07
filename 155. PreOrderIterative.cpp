/*

Preorder Traversal Iterative of a BT

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

// private:
//     void dfs(TreeNode *node, vector<int> &preorder){
//         if(node == NULL){
//             return;
//         }
//         preorder.push_back(node->val);
//         dfs(node->left, preorder);
//         dfs(node->right, preorder);
//     }

public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> preorder;
		if (root == NULL) {
			return preorder;
		}

		stack<TreeNode*> st;
		st.push(root);

		while (!st.empty()) {
			TreeNode *node = st.top();
			st.pop();
			preorder.push_back(node->val);
			if (node->right != NULL) {
				st.push(node->right);
			}
			if (node->left != NULL) {
				st.push(node->left);
			}

		}


		return preorder;

	}
};