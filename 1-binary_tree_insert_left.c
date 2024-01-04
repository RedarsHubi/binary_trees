#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: parent
 * @value: value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *news;

	if (parent == NULL)
		return (NULL);

	news = malloc(sizeof(binary_tree_t));
	if (news == NULL)
		return (NULL);

	news->parent = parent;
	news->n = value;
	news->left = parent->left;
	news->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = news;

	parent->left = news;

	return (news);
}
