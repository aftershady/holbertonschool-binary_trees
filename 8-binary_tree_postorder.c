#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree in post-order.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *
 * Description: This function visits the nodes of a binary tree in post-order
 * (left subtree, right subtree, current node) and applies the function `func`
 * to the value of each node. If either `tree` or `func` is NULL, the function
 * does nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}

