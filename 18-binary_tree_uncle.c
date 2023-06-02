#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: to find its uncle
 *
 * Return: return the uncle node else NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_p;

	if (node == NULL)
		return (NULL);

	if (node->parent)
	{
		parent = node->parent;
		if (parent->parent)
		{
			grand_p = parent->parent;
			if (grand_p->left != parent)
				return (grand_p->left);
			else
				return (grand_p->right);
		}

	}

	return (NULL);

}
