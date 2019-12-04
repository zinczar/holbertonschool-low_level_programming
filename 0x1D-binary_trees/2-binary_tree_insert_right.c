#include "binary_trees.h"

/**
 * main - Code
 *
 * Return: 0
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (!parent || !right_node)
		return (NULL);

        right_node->n= value;
        right_node->parent = parent;
        right_node->left = NULL;
        right_node->right = NULL;

	parent->right = right_node;

	return (right_node);
}
