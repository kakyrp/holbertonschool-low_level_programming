# SINGLY LINKED LISTS
For this project, students are expected to look at this concept:
- Data Structures

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General
- When and why using linked lists vs arrays
- How to build and use linked lists

Using this code for the data structure for this project
```C
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```