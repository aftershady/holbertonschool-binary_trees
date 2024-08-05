#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree in a pyramid format.
 * @tree: Pointer to the root of the binary tree.
 */
void binary_tree_print(const binary_tree_t *tree) {
	if (tree == NULL) {
		return;
	}

	int height = 0;
    const binary_tree_t *current = tree;
    while (current) {
        height++;
        current = current->left ? current->left : current->right;
    }

    // Imprimer chaque niveau
    for (int level = 1; level <= height; level++) {
        int spaces = (1 << (height - level)) - 1;  // Espaces avant les valeurs
        int offset = (1 << (height - level + 1)) - 1; // Espaces entre les valeurs

        // Imprimer les espaces avant les valeurs
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }

        // Imprimer les valeurs des noeuds à ce niveau
        for (int i = 0; i < (1 << (level - 1)); i++) {
            const binary_tree_t *node = tree;
            for (int j = 0; j < level - 1; j++) {
                if (i & (1 << j)) {
                    node = node->right;
                } else {
                    node = node->left;
                }
            }

            // Afficher le noeud ou un espace si le noeud est NULL
            if (node) {
                printf("(%03d)", node->n);
            } else {
                printf("   ");
            }

            // Espaces entre les valeurs
            for (int s = 0; s < offset; s++) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
