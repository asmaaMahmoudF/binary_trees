#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the node
 * @value: value to be inserted in the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	if (value == 0)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	if (parent->left = NULL)
		parent->left = node;
	return (node);
}
