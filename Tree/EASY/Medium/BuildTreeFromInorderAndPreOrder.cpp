#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int findPos(int preOrder[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (preOrder[i] == element)
            return i;
    }
    return -1;
}
// NOTE: eak bar kisi index ka element use ho chuka hai root banane k liye kya mujhe wo eak our bar lagega root banane k liye the answer is NO
TreeNode *buildTreeFromInorderAndPostOrder(int inorder[], int preorder[], int size, int &preIndex, int inStart, int inEnd)
{

    if (preIndex >= size || inStart > inEnd)
    {
        return NULL;
    }

    // STEP 1: build root node
    int element = preorder[preIndex++];
    TreeNode *root = new TreeNode(element);
    int pos = findPos(inorder, size, element);

    // STEP 2: root->left SOLVE
    buildTreeFromInorderAndPostOrder(inorder, preorder, size, preIndex, inStart, pos - 1);

    // STEP 3: root->left SOLVE
    buildTreeFromInorderAndPostOrder(inorder, preorder, size, preIndex, pos + 1, inEnd);

    return root;
}

int main()
{
    return 0;
}