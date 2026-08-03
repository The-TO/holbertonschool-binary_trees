#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node on the left
 * @parent: Points to the root of the tree
 * @value: Data stored in the node
 * Return: new_node (Node inserted)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nvx_node;

	if (!parent)
	{
		return (NULL);
	}
	nvx_node = malloc(sizeof(binary_tree_t));
	if (!nvx_node)
	{
		return (NULL);
	}
	nvx_node->n = value;
	nvx_node->left = NULL;
	nvx_node->right = NULL;
	nvx_node->parent = parent;

	if (parent->left != NULL)
	{
		nvx_node->left = parent->left;
		parent->left->parent = nvx_node;
	}
	parent->left = nvx_node;
	return (nvx_node);
}
