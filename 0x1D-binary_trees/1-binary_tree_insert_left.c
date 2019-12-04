#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: binary_tree-T struct
 * @value: Int
 *
 * Return: Left_Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (!parent || !left_node)
	    return (NULL);

        left_node->n= value;
        left_node->parent = parent;
        left_node->left = NULL;
        left_node->right = NULL;

	if (parent->left)
		parent->left->parent = left_node;
	parent->left = left_node;

return (left_node);

}
