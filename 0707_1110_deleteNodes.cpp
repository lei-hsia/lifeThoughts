/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> roots;
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        roots = {};
        dfs(root, false, to_delete);
        return roots;
    }
    void dfs(TreeNode* root, bool has_parent, vector<int>& d) {
        // root; 分类root会不会被delete，因为影响了dfs的参数
        if (root == nullptr) return;
        // root will be deleted: dfs参数是false
        if (find(begin(d), end(d), root->val) != d.end()) {
            dfs(root->left, false, d); // 当前节点删除了，子节点就没有父节点了, 参数变为false
            dfs(root->right, false, d);
            return;
        }
            // 不是处理子节点而是看parent: 决定是否加入roots(和子节点是否是NULL的处理方式不同)
            // 而且: 通过了上面的if表明当前节点不是NULL也没有被删掉: 那么应该留下来; 但是必须真是通过了上面的if,
            // 不应该是因为还没有检查上面的情况漏掉了加入roots; 所以上面第二个if要有return
        if (!has_parent) roots.push_back(root);
        
        // root not deleted; recursive dfs children nodes; children nodes have parent node
        dfs(root->left, true, d);
        dfs(root->right, true, d);
        
        // 子节点如果要删除也是变为NULL而不是上面那样加入root作为单独的森林; 这一步要放在所有的dfs之后
        if (root->left != NULL && find(begin(d), end(d), root->left->val) != d.end()) root->left = NULL;
        if (root->right != NULL && find(begin(d), end(d), root->right->val) != d.end()) root->right = NULL;
    }
};