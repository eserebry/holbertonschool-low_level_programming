#include "binary_trees.h"

/**
 * binary_tree_insert_left - nserts a node as the left-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to a new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;

	if (parent == NULL)
		return (NULL);
	new_left = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left = new_left;
		new_left->left->parent = new_left;
	}
	else
		parent->left = new_left;
	return (new_left);
}
