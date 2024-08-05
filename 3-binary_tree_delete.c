#include <stdlib.h>
#include "binary_trees.h"
/**
 * delete_node - delete the binary tree
 * @tree: first node of binary tree
 * Return : nothing
 */
void delete_node(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	delete_node(tree->left);
	delete_node(tree->right);
	free(tree);
}
/**
 * binary_tree_delete - use recursion to delete a binary three
 * @tree: tree send
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
	return;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
	}

	delete_node(tree);
}
