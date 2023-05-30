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
	{
		return (NULL);
	}

	leftNode = malloc(sizeof(binary_tree_t));

	if (leftNode == NULL)
	{
		return (NULL);
	}

	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->right = NULL;
	leftNode->left = NULL;

	if (parent->left == NULL)
	{
		parent->left = leftNode;
	}
	else
	{
		leftNode->left = parent->left;
		parent->left = leftNode;
	}

	return (leftNode);

}
