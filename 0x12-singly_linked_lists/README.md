<h1>C - Singly linked lists</h1>

<h5>Data structure for the project</h5>
<pre>/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</pre>

<h4>Task 0 - 0-print_list.c</h4>
Write a function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

<h4>Task 1 - 1-list_len.c</h4>
Write a function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

<h4>Task 2 - 2-add_node.c</h4>
Write a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

<h4>Task 3 - 3-add_node_end.c</h4>
Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

<h4>Task 4 - 4-free_list.c</h4>

Write a function that frees a list_t list.

Prototype: void free_list(list_t *head);

