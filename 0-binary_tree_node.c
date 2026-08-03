#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to the parent node to create
 * @value: Data stored in the node
 * Return: new_node (Node created)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nvx_node;

	nvx_node = malloc(sizeof(binary_tree_t));

	if (!nvx_node)
	{
		return (NULL);
	}
	nvx_node->parent = parent;
	nvx_node->left = NULL;
	nvx_node->right = NULL;
	nvx_node->n = value;

	return (nvx_node);
}
