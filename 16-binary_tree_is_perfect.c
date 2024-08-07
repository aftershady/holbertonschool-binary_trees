#include "binary_trees.h"
#include <stdio.h>

/**
 * count_nodes - Count the number of nodes in a binary tree.
 * @tree: A pointer to the root node of the tree to count nodes in.
 *
 * Return: The total number of nodes in the tree.
 */
size_t count_nodes(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;

	if (!tree)
		return (0);

	left_count = count_nodes(tree->left);
	right_count = count_nodes(tree->right);

	return (left_count + right_count + 1);
}

/**
 * is_complete - Check if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 * @index: The index of the current node in a level-order traversal.
 * @number_nodes: The total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int is_complete(const binary_tree_t *tree, size_t index, size_t number_nodes)
{
	int left_complete;
	int right_complete;

	if (!tree)
		return (1);
	if (index >= number_nodes)
		return (0);

	left_complete = is_complete(tree->left, 2 * index + 1, number_nodes);
	right_complete = is_complete(tree->right, 2 * index + 2, number_nodes);

	return (left_complete && right_complete);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t total_nodes;

	if (!tree)
		return (0);

	total_nodes = count_nodes(tree);
	return (is_complete(tree, 0, total_nodes));
}


