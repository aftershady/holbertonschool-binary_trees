#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_uncle - give the uncle of the node
 * @node: node given
 * Return : the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

if (!node || !node->parent || !node->parent->parent)
	return (NULL);

if (node->parent->parent->left == node->parent)
	return (node->parent->parent->right);

return (node->parent->parent->left);

}

