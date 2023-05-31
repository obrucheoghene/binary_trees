#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the root of the tree
 *
 * Return: return the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	return (left_height > right_height ? left_height - 1 : right_height - 1);

}
