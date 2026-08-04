#include "binary_trees.h"
/**
 * binary_tree_height - Function that prints the height of a tree
 * @tree: Pöints to the beginning of the tree
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (1 + (left_height));
	}
	else
	{
		return (1 + (right_height));
	}
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes in the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size + 1);
}
/**
 * binary_tree_is_perfect - Function that checks if a tree is perfect
 * @tree: points to the tree
 * Return: if it is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hauteur, taille;

	if (!tree)
	{
		return (0);
	}
	hauteur = binary_tree_height(tree);
	taille = binary_tree_size(tree);

	return (taille == (size_t)((1 << (hauteur + 1)) - 1));
}
