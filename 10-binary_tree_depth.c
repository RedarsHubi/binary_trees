#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of tree
 * @tree: root
 * Return: depth tree or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return binary_tree_depth(tree->parent) + 1;
}
