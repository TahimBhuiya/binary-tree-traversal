//Created by Tahim Bhuiya
// Implementation of a Binary Tree

#include<iostream>
#include <queue>

struct BinaryTreeNode {
    char key;      // Character key to identify the node
    int value;     // Integer value associated with the node
    BinaryTreeNode* left;   // Pointer to the left child
    BinaryTreeNode* right;  // Pointer to the right child