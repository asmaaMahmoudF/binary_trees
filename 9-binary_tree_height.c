#include "binary_trees.h"
/**
 * binary_tree_height - A function to return the length of a tree
 * @tree: A pointer the root node of the tree
 * Return: Length of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftlen = 0, rightlen = 0;
	binary_tree_t *ptr = (binary_tree_t *)tree;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (tree->left)
			leftlen = binary_tree_height(tree->left) + 1;
		else
			leftlen = 0;
		if (tree->right)
			rightlen = binary_tree_height(tree->right) + 1;
		else
			rightlen = 0;
	}
	return (leftlen > rightlen ? leftlen : rightlen);
}
