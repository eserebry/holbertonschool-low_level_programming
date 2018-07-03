#include "binary_trees.h"

/**
 * binary_tree_height - prints the height of the binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftside = 0, rightside = 0;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftside = binary_tree_height(tree->left);
	rightside = binary_tree_height(tree->right);
	if (leftside < rightside)
		return (rightside + 1);
	else
		return (leftside + 1);
}
