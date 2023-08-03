<<<<<<< HEAD
Binary trees
Binary tree (note the first line: Not to be confused with B-tree.)(https://en.wikipedia.org/wiki/Binary_tree)
Data Structure and Algorithms - Tree(https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
Tree Traversal(https://www.programiz.com/dsa/tree-traversal)
Binary Search Tree(https://en.wikipedia.org/wiki/Binary_search_tree)
Data structures: Binary Tree(https://www.youtube.com/watch?v=H5JubkIy_p8&ab_channel=mycodeschool)
=======
# Binary Trees

```diff
- TASKS:
```

### TASK-#0 New Node | : [0-binary_tree_node.c](0-binary_tree_node.c)

Write a function that creates a binary tree node

* Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
* Where parent is a pointer to the parent node of the node to create
* And value is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or NULL on failure

### RESULT:

<sup><sub>RESULT is influenced by [0-main.c](./main_tests/0-main.c) and the [binary_tree_print.c](./binary_tree_print.c)</sub></sup>
![images/task0_output.jpg](images/task0_output.jpg)


TASK-#1 Insert left | : [1-binary_tree_insert_left.c)(1-binary_tree_insert_left.c);

Write a function that inserts a node as the left-child of another node

* Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
* Where parent is a pointer to the node to insert theleft-child in
* And value is the value to store in the new node
* Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
* If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### RESULT:

<sup><sub>RESULT is influenced by [1-main.c](./main_tests/1-main.c) and the [binary_tree_print.c](./binary_tree_print.c) and a dependency from the previous task</sub></sup>
![images/task1_output.jpg](images/task1_output.jpg)
>>>>>>> 8e788803bdc6e01bbb02ba5dcba6233aa6d40cbb