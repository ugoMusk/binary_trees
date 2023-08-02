#include "binary_trees.h"

/**
 * binary_tree_insert_left - pointer function that inserts a node to the left
 * @parent: pointer to the parent of the node
 * @value: the value to be stored to the new node
 * Return: binary tree with the created node
 * Description: If parent already has a left-child,
 *		the new node must take its place,
 *		and the old left-child must be set
 *		as the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
