# 0x17. C - Doubly linked lists
** C algorithm and data structure **
## Tasks
### 0. Print list
Write a function that prints all the elements of a dlistint\_t list.

  - Prototype: size\_t print\_dlistint(const dlistint\_t \*h);
  - Return: the number of nodes
  - Format: see example </br>
FIle: [0-print\_dlistint.c](0-print_dlistint.c)

### 1. List length
Write a function that returns the number of elements in a linked dlistint\_t list.

  - Prototype: size\_t dlistint\_len(const dlistint\_t \*h); </br>
File:[1-dlistint\_len.c](1-dlistint_len.c)

### 2. Add node
Write a function that adds a new node at the beginning of a dlistint\_t list.

  - Prototype: dlistint\_t \*add\_dnodeint(dlistint\_t \*\*head, const int n);
  - Return: the address of the new element, or NULL if it failed </br>
File:[2-add\_dnodeint.c](2-add_dnodeint.c)

### 3. Add node at the end
Write a function that adds a new node at the end of a dlistint\_t list.

  - Prototype: dlistint\_t \*add\_dnodeint\_end(dlistint\_t \*\*head, const int n);
  - Return: the address of the new element, or NULL if it failed </br>
File:[3-add\_dnodeint\_end.c](3-add_dnodeint_end.c)

### 4. Free list
Write a function that frees a dlistint\_t list.

  - Prototype: void free\_dlistint(dlistint\_t \*head); </br>
File:[4-free\_dlistint.c](4-free_dlistint.c)

### 5. Get node at index
Write a function that returns the nth node of a dlistint\_t linked list.

  - Prototype: dlistint\_t \*get\_dnodeint\_at\_index(dlistint\_t \*head, unsigned int index);
  - where index is the index of the node, starting from 0
  - if the node does not exist, return NULL </br>
File:[5-get\_dnodeint.c](5-get_dnodeint.c)

### 6. Sum list
Write a function that returns the sum of all the data (n) of a dlistint\_t linked list.

  - Prototype: int sum\_dlistint(dlistint\_t \*head);
  - if the list is empty, return 0 </br>
File:[6-sum\_dlistint.c](6-sum_dlistint.c)

### 7. Insert at index
Write function that inserts a new node at a given position.

  - Prototype: dlistint\_t \*insert\_dnodeint\_at\_index(dlistint\_t \*\*h, unsigned int idx, int n);
  - where idx is the index of the list where the new node should be added. Index starts at 0
  - Returns: the address of the new node, or NULL if it failed
  - if it is not possible to add the new node at index idx, do not add the new node and return NULL </br>

Your files 2-add\_dnodeint.c and 3-add\_dnodeint\_end.c will be compiled during the correction </br>
File:[7-insert_dnodeint.c](7-insert_dnodeint.c), [2-add_dnodeint.c](2-add_dnodeint.c), 
[3-add_dnodeint_end.c](3-add_dnodeint_end.c)

### 8. Delete at index
Write a function that deletes the node at index index of a dlistint\_t linked list.

  - Prototype: int delete\_dnodeint\_at\_index(dlistint\_t \*\*head, unsigned int index);
  - where index is the index of the node that should be deleted. Index starts at 0
  - Returns: 1 if it succeeded, -1 if it failed </br>
File:[8-delete\_dnodeint.c](8-delete_dnodeint.c)
