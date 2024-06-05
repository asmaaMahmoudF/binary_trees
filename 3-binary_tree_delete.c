#include "binary_trees.h"
/**
 * binary_tree_delete - A function to Delete an Entire tree
 * @tree: A pointer which points to the root of the tree
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *ptr;

	ptr = tree;
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (ptr != NULL)
		{
			binary_tree_delete(ptr->left);
			binary_tree_delete(ptr->right);
		}
		free(ptr);
	}
}
