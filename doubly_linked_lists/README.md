---

## 🔹 Task 0: Print list

### 🧠 Description :
Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes
Format: see example

### 📁 Files :
- `0-print_dlistint.c`
- `lists.h`

### 📌 Prototype :
```c
size_t print_dlistint(const dlistint_t *h);
```

---

## 🔹 Task 1: List length

### 🧠 Description :
Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

### 📁 Files :
- `1-dlistint_len.c`
- `lists.h`

### 📌 Prototype :
```c
size_t dlistint_len(const dlistint_t *h);
```

---

## 🔹 Task 2: Add node

### 🧠 Description :
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);  
Return: the address of the new element, or NULL if it failed

### 📁 Files :
- `2-add_dnodeint.c`
- `lists.h`

### 📌 Prototype :
```c
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

---

## 🔹 Task 3: Add node at the end

### 🧠 Description :
Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);  
Return: the address of the new element, or NULL if it failed

### 📁 Files :
- `3-add_dnodeint_end.c`
- `lists.h`

### 📌 Prototype :
```c
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

---

## 🔹 Task 4: Free list

### 🧠 Description :
Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);

### 📁 Files :
- `4-free_dlistint.c`
- `lists.h`

### 📌 Prototype :
```c
void free_dlistint(dlistint_t *head);
```

---

## 🔹 Task 5: Get node at index

### 🧠 Description :
Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);  
where index is the index of the node, starting from 0  
if the node does not exist, return NULL

### 📁 Files :
- `5-get_dnodeint.c`
- `lists.h`

### 📌 Prototype :
```c
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```

---

## 🔹 Task 6: Sum list

### 🧠 Description :
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);  
if the list is empty, return 0

### 📁 Files :
- `6-sum_dlistint.c`
- `lists.h`

### 📌 Prototype :
```c
int sum_dlistint(dlistint_t *head);
```
