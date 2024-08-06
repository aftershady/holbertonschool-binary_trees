#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - tell if the node is the first node of binary tree
 * @node: node send
 * Return: 1 if node is root, 0 if node is not ou = to NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
