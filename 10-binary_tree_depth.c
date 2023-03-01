#include "binary_trees.h"

/**
 * recursive_depth - measures the depth of a node
 *
 * @tree: root node
 * Return: depth of the node of a b-tree.
 */

size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls recursive depth to return
 * depth of the tree
 *
 * @tree: root node
 * Return: depth of the tree, and 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
