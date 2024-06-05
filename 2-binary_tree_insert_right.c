#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function to inserts a node as
 * the right-child of another node
 * @parent: A pointer to a node to insert the right child in
 * @value: The value(data) to be inserted in
 * Return: A pointer to the inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (value == 0)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
