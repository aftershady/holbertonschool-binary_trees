#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * A full binary tree is a tree in which every node other than the
 * leaves has two children. This function checks if the binary
 * tree meets that condition.
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
return (0);
}
