#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int height(TreeNode* node) {
    if (node == nullptr) return 0;
    return 1 + max(height(node->left), height(node->right));
}

void printCurrentLevel(TreeNode* root, int level) {
    if (root == nullptr) return;
    if (level == 1) cout << root->val << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level-1);
        printCurrentLevel(root->right, level-1);
    }
}

void printLevelOrder(TreeNode* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printCurrentLevel(root, i);
        cout << endl;
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    printLevelOrder(root);
    return 0;
}
