//Created by Tahim Bhuiya
// Implementation of a Binary Tree

#include<iostream>
#include <queue>

struct BinaryTreeNode {
    char key;      // Character key to identify the node
    int value;     // Integer value associated with the node
    BinaryTreeNode* left;   // Pointer to the left child
    BinaryTreeNode* right;  // Pointer to the right child

    // Constructor initializes key, value, and sets children to NULL
    BinaryTreeNode(char key, int value) {
        this->key = key;
        this->value = value;
        left = NULL;
        right = NULL;
    }

    // Recursive in-order traversal: Left → Node → Right
    void inOrderTraversal(BinaryTreeNode* node) {
        if (node == NULL) return;
        inOrderTraversal(node->left);
        std::cout << node->key << " ";
        inOrderTraversal(node->right);
    }

    // Recursive pre-order traversal: Node → Left → Right
    void preOrderTraversal(BinaryTreeNode* node) {
        if (node == NULL) return;
        std::cout << node->key << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    // Recursive post-order traversal: Left → Right → Node
    void postOrderTraversal(BinaryTreeNode* node) {
        if (node == NULL) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        std::cout << node->key << " ";
    }

    BinaryTreeNode* DFS(BinaryTreeNode* node, char target) {
        if (node == NULL) return NULL;

        BinaryTreeNode* left_res = DFS(node->left, target);
        if (left_res != NULL) return left_res;

        BinaryTreeNode* right_res = DFS(node->right, target);
        if (right_res != NULL) return right_res;

        if (node->key == target) return node;

        return NULL;
    }