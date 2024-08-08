#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node.
 * @node: A pointer to the node to find the sibling for.
 *
 * Return: A pointer to the sibling node, or NULL if:
 *         - the node is NULL,
 *         - the node has no parent (node is the root),
 *         - the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node)
	{
		return (NULL);
	}

	if (!parent)
	{
		return (NULL);
	}

	if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}
	return (NULL);
}
