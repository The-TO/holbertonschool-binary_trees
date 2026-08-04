#include "binary_trees.h"
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
        return(0);
    }
    hauteur = binary_tree_height(tree);
    taille = binary_tree_size(tree);

    return (taille == (size_t)((1 << (hauteur+1))-1));
}
