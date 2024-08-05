#include "binary_trees.h"
#include <stdio.h>

/**
 * _print_tree - print all nodes in order traversal
 * @tree: pointer on the first node
 * @func: function pointer on the function print_node
 * Description: use recursion to start to printf from the last node
 * on the left to the last node on the right
 * Return: nothing
 */
void _print_tree(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	return;

	_print_tree(tree->left, func);
	func(tree->n);
	_print_tree(tree->right, func);
}
/**
 * binary_tree_inorder - check if node is right before print
 * @tree: pointer to a node in the binary tree
 * @func: function pointer on the function print_node
 * Description: check if the node given is not empty and if it's
 * the first node of the list, if it is, give it to the _print_tree
 * function
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	while (tree->parent)
	{
		tree = tree->parent;
	}

	_print_tree(tree, func);
}
