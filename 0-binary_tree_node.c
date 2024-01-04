#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree
 *
 * @parent: parent
 * @value: value
 * Return: pointer to novelty node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *novelty;

	novelty = malloc(sizeof(binary_tree_t));
	if (novelty == NULL)
		return (NULL);

	novelty->parent = parent;
	novelty->n = value;
	novelty->left = NULL;
	novelty->right = NULL;

	return (novelty);
}
