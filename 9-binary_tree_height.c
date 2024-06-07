#include "binary_trees.h"
/**
 * binary_tree_height - A function to return the length of a tree
 * @tree: A pointer the root node of the tree
 * Return: Length of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len1 = 0, len2 = 0;
	binary_tree_t *ptr = tree;

	if (tree == NULL)
		return (0);
	while (ptr != NULL)
	{
		ptr = ptr->left;
		len1++;
	}
	ptr = tree;
	while (ptr != NULL)
	{
		ptr = ptr->right;
		len2++;
	}
	if (len1 > len2)
		return (len1);
	else
		return (len2);
}
