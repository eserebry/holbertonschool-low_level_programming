#include "binary_trees.h"
/**
 * binary_tree_height - prints the height of the binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftside, rightside;


	if (tree == NULL)
		return (0);

	leftside = binary_tree_height(tree->left);
	rightside = binary_tree_height(tree->right);
	if (leftside < rightside)
		return (rightside + 1);
	else
		return (leftside + 1);
}

/**
 * binary_tree_balance - returns the number of nodes that have a sibling
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: The size of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftside, rightside;

	if (tree == NULL)
		return (0);

	leftside = binary_tree_height(tree->left);
	rightside = binary_tree_height(tree->right);

	return (leftside - rightside);
}
