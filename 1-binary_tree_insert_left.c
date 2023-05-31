#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: Pointer to parent node
 * @value: new node value
 * Return: Binary tree node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);

	leftNode = binary_tree_node(parent, value);

	if (leftNode == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = leftNode;
	else
	{
		leftNode->left = parent->left;
		parent->left = leftNode;
	}

	return (leftNode);
}
