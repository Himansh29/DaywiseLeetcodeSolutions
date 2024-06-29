#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree() {
    int data;
    cout << "Enter data" << endl;
    cin >> data;

    if (data == -1)
        return NULL;

    TreeNode* node = new TreeNode(data);
    cout << "Enter value for left of: " << data << endl;
    node->left = buildTree();

    cout << "Enter value for right of: " << data << endl;
    node->right = buildTree();

    return node;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(!root) return NULL;
    if(root->val == p->val) return p;
    if(root->val == q->val) return q;

    TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
    TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

    if(!leftAns && !rightAns) return nullptr;
    if(!leftAns && rightAns) return rightAns;
    if(leftAns && !rightAns) return leftAns;
    else return root;
}

// bool kthAncestor(TreeNode* root, TreeNode* p, int& k) {
//     if (root == NULL)
//         return false;
//     if (root->val == p->val)
//         return true;

//     bool leftAns = kthAncestor(root->left, p, k);
//     bool rightAns = kthAncestor(root->right, p, k);

//     if (leftAns || rightAns)
//         k--;

//     if (k == 0) {
//         cout << root->val << endl;
//         k = -1;
//     }

//     return leftAns || rightAns;
// }

// bool kthAncestorUsingList(TreeNode* root, TreeNode* p, int k, vector<int>& ans) {
//     if (root == NULL)
//         return false;
//     if (root->val == p->val)
//         return true;

//     ans.push_back(root->val);
//     bool leftAns = kthAncestorUsingList(root->left, p, k, ans);
//     ans.pop_back();
//     bool rightAns = kthAncestorUsingList(root->right, p, k, ans);

//     if (leftAns || rightAns) {
//         cout << ans[ans.size() - k - 1] << endl;
//     }

//     return leftAns || rightAns;
// }
// 10 20 40 -1 -1 50 80 -1 -1 60 -1 70 -1 -1 30 -1 90 100 -1 -1 -1
int main() {
    TreeNode* root = buildTree();
    TreeNode* p = new TreeNode(80);
    TreeNode* q = new TreeNode(70);
    TreeNode* ans = lowestCommonAncestor(root, p, q);

    cout << "The losest common ancestor of: " << p->val << " && " << q->val << " is: " << ans->val;

    return 0;
}
