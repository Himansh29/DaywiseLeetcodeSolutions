#include<bits/stdc++.h>
using namespace std;
class Tree{
public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Tree* root) {
    if(!root) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Tree* insertDataIntoTree(Tree* root, int data) {
    if(!root) {
        Tree* newRoot = new Tree(data);
        return newRoot;
    }

    if(root->data > data) {
        root->left = insertDataIntoTree(root->left, data);
    }else {
        root->right = insertDataIntoTree(root->right, data);
    }

    return root;
}

void BuildTree(Tree* &root) {

    int data;
    cin >> data;

    while(data != -1) {
        root = insertDataIntoTree(root, data);
        cin >>data ;
    }
}

int main()
{
    Tree* root = NULL;
    BuildTree(root);

    inOrder(root);

    return 0;
}
// TEST CASE
// 500 150 250 600 650 170 90 220 501 1000 111 999 -1