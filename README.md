# Binary Tree Implementation in C++

## 📌 Overview
This project implements a **Binary Tree** in C++ with:
- In-order, Pre-order, and Post-order Traversals
- Depth-First Search (DFS)
- Breadth-First Search (BFS) with level tracking

The program builds a sample binary tree and demonstrates each algorithm.

## 🌳 Tree Structure
The tree created in `main()` looks like this:

```
         A(1)
        /    \
     B(2)     C(3)
    /   \     /   \
 D(4) E(5) F(6) G(7)
```

## 🚀 Features
- **In-order Traversal:** Left → Node → Right
- **Pre-order Traversal:** Node → Left → Right
- **Post-order Traversal:** Left → Right → Node
- **DFS Search:** Recursive search through the tree
- **BFS Search:** Level-order search using queues, reports level of found node