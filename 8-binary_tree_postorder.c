#include "binary_trees.h"
/**
 * binary_tree_postorder - A function to traverse tree
 * @tree: A pointer to the root Node of the tree
 * @func: function to print the tree values
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
