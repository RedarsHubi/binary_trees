#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 *
 * @parent: parent
 * @value: value
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *news;

	if (parent == NULL)
		return (NULL);

	news = malloc(sizeof(binary_tree_t));
	if (news == NULL)
		return (NULL);

	news->parent = parent;
	news->n = value;
	news->left = NULL;
	news->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = news;

	parent->right = news;

	return (news);
}
