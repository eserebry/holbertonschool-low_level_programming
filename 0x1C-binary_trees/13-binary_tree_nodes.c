#include "binary_trees.h"

/**
 * binary_tree_nodes - returns the number of nodes that have a sibling
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: The size of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1);
}
