#include "binary_trees.h"

/**
 * binary_tree_is_parent - checks if a node is parent
 *
 * @node: pointer to the node
 * Return: 1 if parent, 0 otherwise.
 */

int binary_tree_is_parent(const binary_tree_t *node)
{
	int parent = 0;

	if (node && (node->left || node->right))
		parent = 1;

	return (parent);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: root
 * Return: number of parent nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
