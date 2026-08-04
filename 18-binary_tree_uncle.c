#include "binary_trees.h"
/**
 * *tree_sibling - finds the sibling of a node in a binary tree
 * @node: pointer to the node to find the sibling of
 * Return: pointer to the sibling node, or NULL if no sibling exists
 */

static binary_tree_t *tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

/**
 * binary_tree_uncle - Checks the uncle of a node
 * Meaning: It is the sibling of the parent
 * @node: the node to seek its uncle for
 * Return: checks if the uncle is right or left
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
		return (tree_sibling(node->parent));
}
