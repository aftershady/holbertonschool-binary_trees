#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - give the height of a node of a binary tree
 * @tree: pointer to the node of the binary tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	printf("left value %lu\n", left_height);
	right_height = binary_tree_height(tree->right);
	printf("left value %lu\n", left_height);
	printf("right value %lu\n", right_height);


	return ((left_height > right_height ? left_height : right_height) + 1);
}
