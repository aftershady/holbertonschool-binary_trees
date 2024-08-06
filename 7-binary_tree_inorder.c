#include "binary_trees.h"

/**
 * binary_tree_inorder - print all nodes in order traversal
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

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
