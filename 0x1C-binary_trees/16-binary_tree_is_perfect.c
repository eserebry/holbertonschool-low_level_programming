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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_perfect(tree->left) == 0
	    || binary_tree_is_perfect(tree->right) == 0)
		return (0);
	return (1);
}
