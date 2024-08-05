#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - at the right of the node send
 * @parent: pointer on position in binary tree send
 * @value: value to copy in the new node
 * Description: if the parent have already a node on his right
 * the new node become the parent of the parent right
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *new = malloc(sizeof(binary_tree_t));
if (!new)
	return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
parent->right = new;
return (new);
}
