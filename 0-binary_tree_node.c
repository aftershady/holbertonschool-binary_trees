#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a node at position send in a binary tree
 * @parent: pointer on position in binary tree send
 * @value: value to copy in the new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));

if (!new)
	return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
return (new);
}
