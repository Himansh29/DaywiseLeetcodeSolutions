#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
};
class Solution {
  public:
  

    int convertIntoSumTree(Node *node) {
        if(!node) return 0;
        return node->data = (convertIntoSumTree(node->left) + convertIntoSumTree(node->right));
    }
};
int main()
{
    return 0;
}