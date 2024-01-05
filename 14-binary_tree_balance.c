#include "binary_trees.h"

/**
 * binary_tree_height - measures height of tree
 * @tree: root
 * Return: height tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right) ? (left + 1) : (right + 1));
}

/**
 * binary_tree_balance - gives balance factor
 * @tree: root
 * Return: balance factor tree or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left =  binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((int)(left - right));
}
