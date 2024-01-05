#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the leaves in a binary tree
 * @tree: root
 * Return: number of nodes with at least one child or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	

	count = binary_tree_nodes(tree->right);
	count = binary_tree_nodes(tree->left);

	return (count);
}
