# 💻 CSC-531 Data Structure and Algorithms – Lab 03

This lab focuses on understanding and implementing **Linked Lists in C++**. Students will learn how to create nodes dynamically, connect nodes using pointers, perform forward and backward traversal, and count the total number of nodes in singly and doubly linked lists.

---

# ⭐ Task 1: Singly Linked List Implementation

## 🔍 Overview

This program demonstrates the implementation of a singly linked list in C++. It creates five nodes dynamically using the `new` keyword and takes five integer values from the user. Each node contains data and a pointer to the next node. The program connects all nodes, displays the linked list using traversal, counts the total number of nodes, and releases the allocated memory using `delete`.

## 🎯 Objective

To understand the basic structure and implementation of a singly linked list and learn how to create, connect, traverse, and count nodes using pointers.

## ✔️ Output

Displays all five entered values in linked list format using arrows (`->`), followed by the total number of nodes.

## ✍️ Learning Outcomes

- Define a node using a `struct` in C++
- Create nodes dynamically using the `new` keyword
- Connect nodes using the `next` pointer
- Understand the role of the `head` pointer
- Traverse a linked list using a `while` loop
- Count the total number of nodes
- Release dynamically allocated memory using `delete`

---

# ⭐ Task 2: Doubly Linked List Implementation

## 🔍 Overview

This program demonstrates the implementation of a doubly linked list in C++. It creates five nodes dynamically using the `new` keyword and takes five integer values from the user. Each node contains three members: `data`, `prev`, and `next`. The nodes are connected in both directions. The program displays the linked list using forward and backward traversal, counts the total number of nodes, and releases the allocated memory using `delete`.

## 🎯 Objective

To understand the structure and implementation of a doubly linked list and learn how to connect and traverse nodes in both forward and backward directions using pointers.

## ✔️ Output

Displays the five entered values in forward and backward directions using doubly linked list format (`<->`), followed by the total number of nodes.

## ✍️ Learning Outcomes

- Define a doubly linked list node using a `struct`
- Create five nodes dynamically using the `new` keyword
- Understand the purpose of `prev` and `next` pointers
- Connect nodes in both directions
- Perform forward traversal using the `next` pointer
- Perform backward traversal using the `prev` pointer
- Count the total number of nodes
- Release dynamically allocated memory using `delete`

---

# 📊 Comparison: Singly vs Doubly Linked List

| Feature | Singly Linked List | Doubly Linked List |
|---|---|---|
| **Node Members** | `data`, `next` | `data`, `prev`, `next` |
| **Pointers** | One pointer | Two pointers |
| **Traversal** | Forward only | Forward and backward |
| **Connection** | One direction | Both directions |
| **Memory Usage** | Lower | Higher |
| **Implementation** | Simpler | Requires more pointer connections |

---

## 📚 Reference

- GeeksforGeeks – Singly Linked List
- GeeksforGeeks – Doubly Linked List
- Programiz – Linked List Data Structure in C++
