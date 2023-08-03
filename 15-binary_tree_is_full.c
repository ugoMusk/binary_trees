#include "binary_trees.h"

/**
 * if_full_recursively - checks if a binary tree is full recursively
 * @tree: pointer to root node of the tree to check
 * Return: if tree is not full, 0. Otherwise 1
 */
int if_full_recursively(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    if_full_recursively(tree->left) == 0 ||
		    if_full_recursively(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL return 0, otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (if_full_recursively(tree));
}
