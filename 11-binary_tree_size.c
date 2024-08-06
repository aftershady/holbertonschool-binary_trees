#include "binary_trees.h"

/**
 * helper - help to calculate the size of tree with recursion
 * @tree: pointer to the node of the binary tree
 * @size: size to be increment in every node enter
 * Return: the height of binary tree
 */
size_t helper(const binary_tree_t *tree, size_t size)
{
	if (tree == NULL)
		return (0);

	size += helper(tree->left, 0);
	size += helper(tree->right, 0);

	return (size + 1);
}
/**
 * binary_tree_size - give the height of a node of a binary tree
 * @tree: pointer to the node of the binary treebi	
 * Return: the height of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = helper(tree, size);

	return (size);
}
