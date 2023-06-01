#include "binary_trees.h"
#include <stdio.h>

size_t tree_nodes(const binary_tree_t *tree);

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: the root of the tree to count
 *
 * Return: return the amount of leaves in tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_nodes(tree));
}


/**
 * tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: the root of the tree to count
 *
 * Return: return the amount of leaves in tree
*/

size_t tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->parent != NULL) ||
	(tree->right != NULL && tree->parent != NULL))
		return (1);

	size = tree_nodes(tree->left) + tree_nodes(tree->right);

	return (size);
}
