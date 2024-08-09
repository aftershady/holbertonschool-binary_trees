# Binary Trees

## Table of Contents
- [General Information](#general-information)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Tasks](#tasks)

## General Information
- **What is a binary tree?**
  A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left and right child.

- **Difference between a binary tree and a Binary Search Tree:**
  In a Binary Search Tree (BST), the left child of a node contains only nodes with values less than the parent node, and the right child contains only nodes with values greater than the parent node. A binary tree does not have such a constraint.

- **Possible gain in terms of time complexity compared to linked lists:**
  Binary trees can offer logarithmic time complexity (O(log n)) for operations like search, insert, and delete, which is more efficient than the linear time complexity (O(n)) in linked lists.

- **Depth, height, and size of a binary tree:**
  - **Depth:** The length of the path from the root to a node.
  - **Height:** The length of the path from a node to the deepest node in the tree.
  - **Size:** The total number of nodes in the tree.

- **Different traversal methods:**
  - **Pre-order:** Visit the root, then the left subtree, then the right subtree.
  - **In-order:** Visit the left subtree, the root, then the right subtree.
  - **Post-order:** Visit the left subtree, the right subtree, then the root.

- **Types of binary trees:**
  - **Complete:** All levels are fully filled except possibly the last, which is filled from left to right.
  - **Full:** Every node has 0 or 2 children.
  - **Perfect:** All internal nodes have two children, and all leaves are at the same level.
  - **Balanced:** The height of the tree is minimized, keeping it approximately balanced.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with `gcc` using `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code style: Betty
- No global variables allowed
- Max 5 functions per file
- Standard library usage allowed
- Prototypes should be in `binary_trees.h`
- Header files must be include guarded

## Data Structures
- **Basic Binary Tree:**
  ```c
  struct binary_tree_s
  {
      int n;
      struct binary_tree_s *parent;
      struct binary_tree_s *left;
      struct binary_tree_s *right;
  };

  typedef struct binary_tree_s binary_tree_t;


## Tasks

### 0. New Node

Write a function that creates a binary tree node.

- **Prototype:** `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- **Description:** Creates a new binary tree node with the given value. The `parent` parameter is a pointer to the parent node. The new node does not have any children initially. Returns a pointer to the new node or `NULL` on failure.

### 1. Insert Left

Write a function that inserts a node as the left-child of another node.

- **Prototype:** `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- **Description:** Inserts a new node as the left-child of the given `parent` node. If the `parent` already has a left-child, the new node will replace it, and the old left-child will become the left-child of the new node. Returns a pointer to the created node or `NULL` on failure or if `parent` is `NULL`.

### 2. Insert Right

Write a function that inserts a node as the right-child of another node.

- **Prototype:** `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- **Description:** Inserts a new node as the right-child of the given `parent` node. If the `parent` already has a right-child, the new node will replace it, and the old right-child will become the right-child of the new node. Returns a pointer to the created node or `NULL` on failure or if `parent` is `NULL`.

### 3. Delete

Write a function that deletes an entire binary tree.

- **Prototype:** `void binary_tree_delete(binary_tree_t *tree);`
- **Description:** Deletes all nodes in the binary tree starting from the `tree` root. If `tree` is `NULL`, do nothing.

### 4. Is Leaf

Write a function that checks if a node is a leaf.

- **Prototype:** `int binary_tree_is_leaf(const binary_tree_t *node);`
- **Description:** Checks if the given `node` is a leaf node (a node with no children). Returns `1` if the node is a leaf, otherwise returns `0`. If `node` is `NULL`, return `0`.

### 5. Is Root

Write a function that checks if a given node is a root.

- **Prototype:** `int binary_tree_is_root(const binary_tree_t *node);`
- **Description:** Checks if the given `node` is the root of the binary tree (a node with no parent). Returns `1` if the node is a root, otherwise returns `0`. If `node` is `NULL`, return `0`.

### 6. Pre-order Traversal

Write a function that goes through a binary tree using pre-order traversal.

- **Prototype:** `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- **Description:** Traverses the binary tree in pre-order (root, left, right) and applies the function `func` to each node's value. If `tree` or `func` is `NULL`, do nothing.

### 7. In-order Traversal

Write a function that goes through a binary tree using in-order traversal.

- **Prototype:** `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- **Description:** Traverses the binary tree in in-order (left, root, right) and applies the function `func` to each node's value. If `tree` or `func` is `NULL`, do nothing.

### 8. Post-order Traversal

Write a function that goes through a binary tree using post-order traversal.

- **Prototype:** `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- **Description:** Traverses the binary tree in post-order (left, right, root) and applies the function `func` to each node's value. If `tree` or `func` is `NULL`, do nothing.

### 9. Height

Write a function that measures the height of a binary tree.

- **Prototype:** `size_t binary_tree_height(const binary_tree_t *tree);`
- **Description:** Measures the height of the binary tree. The height is the number of edges on the longest path from the root to a leaf. If `tree` is `NULL`, return `0`.

### 10. Depth

Write a function that measures the depth of a node in a binary tree.

- **Prototype:** `size_t binary_tree_depth(const binary_tree_t *tree);`
- **Description:** Measures the depth of the given `tree` node. The depth is the number of edges from the node to the root. Returns `0` if `tree` is `NULL`.

### 11. Size

Write a function that measures the size of a binary tree.

- **Prototype:** `size_t binary_tree_size(const binary_tree_t *tree);`
- **Description:** Measures the size of the binary tree, which is the total number of nodes. Returns `0` if `tree` is `NULL`.

### 12. Leaves

Write a function that counts the leaves in a binary tree.

- **Prototype:** `size_t binary_tree_leaves(const binary_tree_t *tree);`
- **Description:** Counts the number of leaf nodes in the binary tree. A leaf node has no children. Returns `0` if `tree` is `NULL`.

### 13. Nodes

Write a function that counts the nodes with at least 1 child in a binary tree.

- **Prototype:** `size_t binary_tree_nodes(const binary_tree_t *tree);`
- **Description:** Counts the number of nodes that have at least one child. Returns `0` if `tree` is `NULL`.

### 14. Balance Factor

Write a function that measures the balance factor of a binary tree.

- **Prototype:** `int binary_tree_balance(const binary_tree_t *tree);`
- **Description:** Measures the balance factor of the binary tree, defined as the difference between the heights of the left and right subtrees. Returns `0` if `tree` is `NULL`.

### 15. Is Full

Write a function that checks if a binary tree is full.

- **Prototype:** `int binary_tree_is_full(const binary_tree_t *tree);`
- **Description:** Checks if the binary tree is full, meaning every node has either 0 or 2 children. Returns `0` if `tree` is `NULL`.

### 16. Is Perfect

Write a function that checks if a binary tree is perfect.

- **Prototype:** `int binary_tree_is_perfect(const binary_tree_t *tree);`
- **Description:** Checks if the binary tree is perfect, meaning all internal nodes have exactly two children and all leaves are at the same level. Returns `0` if `tree` is `NULL`.

### 17. Sibling

Write a function that finds the sibling of a node.

- **Prototype:** `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- **Description:** Finds the sibling of the given `node`. Returns `NULL` if `node` is `NULL`, has no parent, or has no sibling.

### 18. Uncle

Write a function that finds the uncle of a node.

- **Prototype:** `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- **Description:** Finds the uncle of the given `node`, which is the sibling of the node's parent. Returns `NULL` if `node` is `NULL`, has no grandparent, or has no uncle.

