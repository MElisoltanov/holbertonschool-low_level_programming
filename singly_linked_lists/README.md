# Project: C - Singly linked lists

This project explores the use of singly linked lists in the C programming language.

---

## 🔹 Task 0: Print list

### 🧠 Description:
A function that prints all the elements of a `list_t` list.

### ✅ Expected behavior:
- Prints `[len] str` for each node
- If `str == NULL`, prints `[0] (nil)`
- Returns the number of nodes

### 📁 Files:
- `0-print_list.c`: contains the implementation
- `lists.h`: contains the prototype and the structure

### 📌 Prototype:
```c
size_t print_list(const list_t *h);
```

---

## 🔹 Task 1: list_len

### 🧠 Description :
Write a function that returns the number of elements in a linked list_t list.

- Prototype: size_t list_len(const list_t *h);
- Return: the number of nodes

### 📁 Files :
- `1-list_len.c`
- `lists.h`

### 📌 Prototype :
```c
size_t list_len(const list_t *h);
```

---

## 🔹 Task 2: add_node

### 🧠 Description :
Write a function that adds a new node at the beginning of a list_t list.

- Prototype: list_t *add_node(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup

### 📁 Files :
- `2-add_node.c`
- `lists.h`

### 📌 Prototype :
```c
list_t *add_node(list_t **head, const char *str);
```

---

## 🔹 Task 3: Add node at the end

### 🧠 Description :
Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

### 📁 Files :
- `3-add_node_end.c`
- `lists.h`

### 📌 Prototype :
```c
list_t *add_node_end(list_t **head, const char *str);
```

---

## 🔹 Task 4: Free list

### 🧠 Description :
Write a function that frees a list_t list.

Prototype: void free_list(list_t *head);

### 📁 Files :
- `4-free_list.c`
- `lists.h`

### 📌 Prototype :
```c
void free_list(list_t *head);
```
