#include "binary_trees.h"

size_t tree_size(const binary_tree_t *tree);

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: the root of the tree to measure
 *
 * Return: return the size of the tree else 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_size(tree));
}

/**
 * tree_size - Measures the size of a binary tree
 * @tree: the root of the tree to measure
 *
 * Return: return the size of the tree else 0
*/

size_t tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = 1 + tree_size(tree->left) + tree_size(tree->right);

	return (size);
}
