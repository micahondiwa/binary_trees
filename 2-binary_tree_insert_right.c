#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node
 * to the right and gives a value to the new node
 *
 * @parent: the parent node
 * @value: the value to insert on the new node.
 * Return: pointer to the new node or NULL on fauilre
 */

binary_tree_t *binary_tree_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = parent->parent;

	if (parent->right != NULL)
		parent->right->parent = new;

	parent->right = new;

	return (new);
}
