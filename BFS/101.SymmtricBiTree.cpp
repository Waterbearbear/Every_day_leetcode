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
	bool isSymmetric(TreeNode* root) {

		if (root == nullptr) return true;
		vector<int> first_val;
		vector<int> sec_val;

		deque<TreeNode*> queue;
		queue.push_back(root);

		while (queue.size())
		{
			auto p = queue[0];
			queue.pop_front();
			if (p == nullptr)
			{
				first_val.push_back(-1);
				continue;
			}
			first_val.push_back(p->val);
			// fun(p);


			if (p->left) queue.push_back(p->left);
			else queue.push_back(nullptr);

			if (p->right) queue.push_back(p->right);
			else queue.push_back(nullptr);
		}

		queue.push_back(root);

		while (queue.size())
		{
			auto p = queue[0];
			queue.pop_front();
			if (p == nullptr)
			{
				sec_val.push_back(-1);
				continue;
			}
			sec_val.push_back(p->val);
			// fun(p);
			if (p->right) queue.push_back(p->right);
			else queue.push_back(nullptr);

			if (p->left) queue.push_back(p->left);
			else queue.push_back(nullptr);
		}

		// while()
		return first_val == sec_val;




	}
};