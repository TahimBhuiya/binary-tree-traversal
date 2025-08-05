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

## 🛠 How to Run
You can run this code in two ways:

### 1️⃣ Using a local C++ compiler
- Save the code as `main.cpp`
- Compile and run it with your C++ compiler (e.g., Dev-C++, Code::Blocks, Visual Studio)

### 2️⃣ Using an online C++ compiler
- Go to a site like [Programiz](https://www.programiz.com/cpp-programming/online-compiler) or [Replit](https://replit.com/languages/cpp)
- Paste the code
- Run it directly in your browser

## 📌 Example Output
```
In-order traversal: D B E A F C G

DFS: Found node with key 'E' and value '5'

BFS:
Level 0: Visiting node A
Level 1: Visiting node B
Level 1: Visiting node C
Level 2: Visiting node D
Level 2: Visiting node E
Level 2: Visiting node F
Level 2: Visiting node G
Found target node G with value '7' at level 2

Pre-order traversal: A B D E C F G