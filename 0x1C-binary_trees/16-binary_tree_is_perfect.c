#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

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

/**
 * check_tree - checking if all leafs are on the same level
 *
 * @tree: pointer to the root node of the tree to traverse
 * @depth: depth of the tree
 * @level: level to compare with
 *
 * Return: 1 if all leafes are on the same level, 0 otherwise
 */
int check_tree(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (level == 0)
		{
			level = depth;
			return (1);
		}
		return (level);
	}
	return (check_tree(tree->left, depth, level)
		&& check_tree(tree->right, depth, level));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1  && binary_tree_balance(tree) == 0)
		return (check_tree(tree, 0, level));
	return (0);
}
