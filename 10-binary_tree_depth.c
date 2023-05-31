#include "binary_trees.h"

size_t max_depth(const binary_tree_t *tree);

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: the root of the tree to measure
 *
 * Return: return the dept of the tree else 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (max_depth(tree) - 1);
}

/**
 * max_depth - Measures the depth of a node in a binary tree
 * @tree: the root of the tree to measure
 *
 * Return: return the dept of the tree else 0
*/

size_t max_depth(const binary_tree_t *tree)
{
	size_t mx;

	if (tree == NULL)
		return (0);

	mx = max_depth(tree->parent) + 1;

	return (mx);
}
