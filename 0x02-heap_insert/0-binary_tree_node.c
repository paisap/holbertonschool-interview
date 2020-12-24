#include <stdlib.h>
#include "binary_trees.h"


/**
* binary_tree_node - Add new node
* @parent: Pointer to the node to print
* @value: Offset to print
*
* Return: length of printed tree after process
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
		parent = new;
	return (new);
}
