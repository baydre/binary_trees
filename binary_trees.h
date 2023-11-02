#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stddef.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* The binary tree print function */
/* static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);
*/
void binary_tree_print(const binary_tree_t *);

/* Task #0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task #1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task #2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task #3 */
void binary_tree_delete(binary_tree_t *tree);

/* Task #4 */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Task #5 */
int binary_tree_is_root(const binary_tree_t *node);

/* Task #6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
#endif
