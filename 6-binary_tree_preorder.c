#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcours un arbre binaire en pré-ordre
 * @tree: Pointeur vers la racine de l'arbre
 * @func: Fonction à appeler pour chaque nœud
 *
 * Retour: Rien
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
