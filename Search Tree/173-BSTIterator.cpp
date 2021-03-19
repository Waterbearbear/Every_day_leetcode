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

//

class BSTIterator{
public:
    BSTIterator(TreeNode* root)
    {
        p = root;
        while(p)
        {
            // p = p->left;
            stk.push(p);
            p = p->left;
        }
    }

    int next()
    {
        p = stk.top();
        stk.pop();
        auto temp = p->val;
        p = p->right;
        while(p)
        {
            stk.push(p);
            p = p->left;
        }
        return temp;
    }

    bool hasNext()
    {
        return !stk.empty();
    }

public:
    stack<TreeNode *> stk;
    TreeNode *p;
};


//自己创建了个优先队列,没利用上搜索树的结构
// class BSTIterator {
// public:
//     BSTIterator(TreeNode* root) {
//         // if(root!=nullptr)
//         // {
//         //     if(root->left) BSTIterator(root->left);
//         //     else if(root->right) BSTIterator(root->right);
//         // }
//         search(root);
        
//     }
//     void search(TreeNode* root)
//     {
//         if(root!=nullptr)
//         {
//             q.push(root->val);
//             search(root->left);
//             search(root->right);
//         }
//     }
    
//     int next() {
//         auto temp = q.top();
//         q.pop();
//         return temp;
//     }
    
//     bool hasNext() {
//         return !q.empty();
//     }

// public:
//     priority_queue <int,vector<int>,greater<int> > q;
// };

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */