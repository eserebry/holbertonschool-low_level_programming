#include "binary_trees.h"

/**
 * binary_tree_depth - prints the depth of the binary tree
 *
 * @node: pointer to the root node of the tree to traverse
 * Return: The depth of the tree
 *
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	int counter = 0;

	if (node == NULL)
		return (0);

	while (node->parent != NULL)
	{
		counter++;
		node = node->parent;
	}
	return (counter);
}
