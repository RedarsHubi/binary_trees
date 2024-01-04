/**
 * binary_tree_height - measures height of tree
 * @tree: root
 * Return: height tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
       	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return depth;
}
