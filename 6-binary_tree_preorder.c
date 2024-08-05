#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree in pre-order.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function visits the nodes of a binary tree in pre-order
 * (current node, left subtree, right subtree) and applies the function `func`
 * to the value of each node. If either `tree` or `func` is NULL, the function
 * does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}