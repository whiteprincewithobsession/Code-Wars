#include <vector>
#include <numeric>
#include <algorithm>

struct node{
    node* left;
    node* right;
    int value;
};

int sumTheTreeValues(node* root) {
  if(!root) return 0;
  return root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
}