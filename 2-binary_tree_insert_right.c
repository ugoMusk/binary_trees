#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function pointer that created right node
 * @parent: pointer to the node to insert right cild in
 * @value: value to store in the new node
 * Return: if parent is null or an error occurs then return null
 *	else return a pointer to the new node
 * Description: If parent already has a right-child,
 *		the new node must take its place,
 *		and the old right-child must be set
 *		as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
