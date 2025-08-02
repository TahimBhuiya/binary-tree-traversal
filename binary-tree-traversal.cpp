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

    // Depth-First Search (DFS) to find node with a specific key
    BinaryTreeNode* DFS(BinaryTreeNode* node, char target) {
        if (node == NULL) return NULL;

        // Search in left subtree
        BinaryTreeNode* left_res = DFS(node->left, target);
        if (left_res != NULL) return left_res;

        // Search in right subtree
        BinaryTreeNode* right_res = DFS(node->right, target);
        if (right_res != NULL) return right_res;

        // Check the current node
        if (node->key == target) return node;

        return NULL;
    }

    // Breadth-First Search (BFS) to find a node and report its level
    std::pair<BinaryTreeNode*, int> BFS(BinaryTreeNode* node, char target) {
        if (node == NULL) return {NULL, -1}; // Tree is empty

        // Queue for level-order traversal: stores node and its level
        std::queue<std::pair<BinaryTreeNode*, int>> current_level_queue;
        std::queue<std::pair<BinaryTreeNode*, int>> next_level_queue;
        int level = 0;
    
        current_level_queue.push({node, level}); // Start with root

        // Continue while there are nodes in either queue
        while (!current_level_queue.empty() || !next_level_queue.empty()) {
            // If current level is done, move to the next
            if (current_level_queue.empty()) {
                std::swap(current_level_queue, next_level_queue);
                level++;
            }
            auto currentNodePair = current_level_queue.front();
            BinaryTreeNode* currentNode = currentNodePair.first;
            level = currentNodePair.second;
            current_level_queue.pop();

            // Print current visiting node
            std::cout << "Level " << level << ": Visiting node " << currentNode->key << std::endl;

            // If node matches target, return it
            if (currentNode->key == target) {
                std::cout << "Found target node " << target
                          << " with value '" << currentNode->value
                          << "' at level " << level << std::endl;
                return {currentNode, currentNode->value};
            }

            // Add children to next level queue
            if (currentNode->left != NULL) {
                next_level_queue.push({currentNode->left, level + 1});
            }
            if (currentNode->right != NULL) {
                next_level_queue.push({currentNode->right, level + 1});
            }
        }

        // If target was not found
        std::cout << "Target node " << target << " not found in the tree." << std::endl;
        return {NULL, -1};
    }
};

int main() {
    // Create a sample binary tree
    BinaryTreeNode* root = new BinaryTreeNode('A', 1);
    root->left = new BinaryTreeNode('B', 2);
    root->right = new BinaryTreeNode('C', 3);
    root->left->left = new BinaryTreeNode('D', 4);
    root->left->right = new BinaryTreeNode('E', 5);
    root->right->left = new BinaryTreeNode('F', 6);
    root->right->right = new BinaryTreeNode('G', 7);

    // In-order traversal test  
    std::cout << "In-order traversal: ";
    root->inOrderTraversal(root);
    std::cout << std::endl;

    // DFS test: search for node with key 'E'
    char targetDFS = 'E';
    BinaryTreeNode* resultDFS = root->DFS(root, targetDFS);
    if (resultDFS != nullptr) {
        std::cout << "\nDFS: Found node with key '" << targetDFS
                  << "' and value '" << resultDFS->value << "'" << std::endl;
    } else {
        std::cout << "\nDFS: Node with key '" << targetDFS << "' not found." << std::endl;
    }






}