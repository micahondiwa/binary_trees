#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a value to the left
 * child of a nother node.
 *
 * @parent: the parent node
 * @value: the value of node
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new;

	parent->left = new;

	return (new);
}
