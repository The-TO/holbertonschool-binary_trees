#include "binary_trees.h"

/**
 * binary_tree_inorder - Runs through a tree, preorder way
 * @tree: Points to the root of the tree
 * @func: Pointer to the function to call each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, *func);
    func(tree->n);
	binary_tree_inorder(tree->right, *func);
}
