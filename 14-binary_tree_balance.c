#include "binary_trees.h"
/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree, or 0 if tree is NULL
 */

static int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
	{
		return (-1);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (1 + (left > right ? left : right));
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor (left height - right height), 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right;
	int left;

	if (!tree)
	{
		return (0);
	}
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (left - right);
}

