#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if root
 *
 * @node: node to check
 * Return: 1 if root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node && !(node->parent))
		return (1);

	return (0);
}
