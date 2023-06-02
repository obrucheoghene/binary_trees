#include "binary_trees.h"

size_t tree_side_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	left = (int)tree_side_height(tree->left);
	right = (int)tree_side_height(tree->right);


	return (left - right);
}


/**
 * tree_side_height - Measure the max height of the subtree
 * @tree: the root of the tree
 *
 * Return: return the max subtree
*/

size_t tree_side_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? tree_side_height(tree->left) + 1 : 1;
	right_height = tree->right ? tree_side_height(tree->right) + 1 : 1;

	return ((left_height > right_height) ? left_height : right_height);
}
