#include "binary_trees.h"

size_t max_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the root of the tree
 *
 * Return: return the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_height;

	if (tree == NULL)
		return (0);

	max_height = max_tree_height(tree);
	return (max_height - 1);
}

/**
 * max_tree_height - Measure the max height of the subtree
 * @tree: the root of the tree
 *
 * Return: return the max subtree
*/

size_t max_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = max_tree_height(tree->left) + 1;
	right_height = max_tree_height(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}
