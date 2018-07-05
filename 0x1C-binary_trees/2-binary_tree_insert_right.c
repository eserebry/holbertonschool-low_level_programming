#include "binary_trees.h"

/**
 * binary_tree_insert_right - nserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to a new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	new_right = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right = new_right;
		new_right->right->parent = new_right;
	}
	else
		parent->right = new_right;
	return (new_right);
}
