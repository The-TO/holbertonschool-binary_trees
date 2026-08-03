#include "binary_trees.h"

/**
 * binary_tree_depth - function that seeks the depth of a node
 * @tree: Points to the tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (!tree || !tree->parent)
    {
        return(0);
    }
    return (binary_tree_depth(tree->parent) + 1);
}