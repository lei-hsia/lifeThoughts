// full version, including input && output.
/*
	Given the root of a BST w. distinct values, modify it so that 
	every node has a new value equal to the sum of values of the 
	original tree that are greater than or equal to node.val
*/	

struct TreeNode {
	int val;
	TreeNode* left; 
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}

class Solution {
public:
	TreeNode* bstToGst(TreeNode* root) {
		int sum = 0;
		rightLeft(root, sum);
		return root;
	}
	void rightLeft(TreeNode* root, int& sum) {
		if (root == NULL) return;
		rightLeft(root->right, sum);
		sum += root->val;
		root->val = sum;
		rightLeft(root->left, sum);
	}
};

// irrelevant to algorithm; standard inputs && outputs
void trimLeftTrailingSpaces(string &input) {
	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
		return !isspace(ch);
	}));
}

void trimRightTrailingSpaces(string &input) {
	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
		return !isspace(ch);
	}).base(), input.end());
}

// 给的string是tree层次遍历放进去的，并且是从左到右的顺序
TreeNode* stringToTreeNode(string input) {
	trimLeftTrailingSpaces(input);
	trimRightTrailingSpaces(input);
	input = input.substr(1, input.length() - 2);
	if (!input.size()) {
		return nullptr;
	}

	string item;
	stringstream ss;
	ss.str(input);

	getline(ss, item, ',');
	TreeNode* root = new TreeNode(stoi(item));
	queue<TreeNode*> nodeQueue;
	nodeQueue.push(root);

	while(true) {
		TreeNode* node = nodeQueue.front();
		nodeQueue.pop();

		if (!getline(ss, item, ',')) {
			break;
		}

		trimLeftTrailingSpaces(item);
		if (item != "null") {
			int leftNumber = stoi(item);
			node->left = new TreeNode(leftNumber);
			nodeQueue.push(node->left);
		}

		if (!getline(ss, item, ',')) {
			break;
		}

		trimLeftTrailingSpaces(item);
        if (item != "null") {
            int rightNumber = stoi(item);
            node->right = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
	}
	return root;
}

string treeNodeToString(TreeNode* root) {
    if (root == nullptr) {
      return "[]";
    }

    string output = "";
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node == nullptr) {
          output += "null, ";
          continue;
        }

        output += to_string(node->val) + ", ";
        q.push(node->left);
        q.push(node->right);
    }
    return "[" + output.substr(0, output.length() - 2) + "]";
}


int main() {
    string line;
    while (getline(cin, line)) {
        TreeNode* root = stringToTreeNode(line);
        
        TreeNode* ret = Solution().bstToGst(root);

        string out = treeNodeToString(ret);
        cout << out << endl;
    }
    return 0;
}






