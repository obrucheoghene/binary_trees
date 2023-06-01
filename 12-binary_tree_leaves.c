#include "binary_trees.h"

size_t tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: the root of the tree to count
 *
 * Return: return the amount of leaves in tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_leaves(tree));
}


/**
 * tree_leaves - Counts the leaves in a binary tree
 * @tree: the root of the tree to count
 *
 * Return: return the amount of leaves in tree
*/

size_t tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size = tree_leaves(tree->left) + tree_leaves(tree->right);

	return (size);
}
