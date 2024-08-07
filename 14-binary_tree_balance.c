#include "binary_trees.h"

/**
 * helper - help to calculate the heiht of tree with recursion
 * @tree: pointer to the node of the binary tree
 * @size: size to be increment in every node enter
 * Return: the height of binary tree
 */
size_t helper(const binary_tree_t *tree, size_t size)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = helper(tree->left, 0);
	right_height = helper(tree->right, 0);

	size += (left_height > right_height ? left_height : right_height);

	return (size + 1);
}
/**
 * height_bt - give the height of a node of a binary tree
 * @tree: pointer to the node of the binary tree
 * Return: the height of binary tree
 */
size_t height_bt(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = helper(tree, size);

	return (size);
}
/**
 * binary_tree_balance - give the difference between left and right branch
 * @tree: node of a binary tree given
 * Description : give the branch left and right to the function who will
 * calculate treir height
 * Return: the difference of height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	left_size = height_bt(tree->left);
	right_size = height_bt(tree->right);

	return (left_size - right_size);
}
