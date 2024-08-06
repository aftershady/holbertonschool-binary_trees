#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the binary tree. If tree is NULL,
 * return 0. A NULL pointer is not considered a leaf.
 *
 * Description:
 * This function traverses the binary tree recursively and
 * counts the number of leaf nodes. A leaf node is defined
 * as a node that has no children (both left and right
 * pointers are NULL). The function returns the total count
 * of leaf nodes found in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
