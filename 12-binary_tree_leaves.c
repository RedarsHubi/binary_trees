#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: root
 * Return: number of leaves in a the tree or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL) 
	{
	       	return 1;
	}

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);

	return right + left;
}
