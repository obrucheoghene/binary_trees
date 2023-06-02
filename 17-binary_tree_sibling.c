#include "binary_trees.h"

/**
 * binary_tree_sibling - find siblings of a node
 * @node: pointer to node
 * Return: node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	if (!node->parent->left && !node->parent->right)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
