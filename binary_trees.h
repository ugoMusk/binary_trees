#ifnef "__BINARY_TREES__"
#define "__BINARY_TREES__"

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


/**
 * Function prototypes
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* __BINARY_TREES__ */
