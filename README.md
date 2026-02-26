# 🌟 Low-Level Programming & Data Structures Journey


<p align="center">
    <img src="https://img.shields.io/badge/Languages-C%20%7C%20C%2B%2B-blue?style=for-the-badge" />
    <img src="https://img.shields.io/badge/Focus-Memory%20Management-red?style=for-the-badge" />
    <img src="https://img.shields.io/badge/Status-K%26R%20Deep%20Dive-success?style=for-the-badge" />
</p>

Welcome to my learning repository. While I initially started with **C++**, I decided to take a step back into **C** to build a rock-solid understanding of memory management, pointers, and the "under-the-hood" mechanics that make C++ so powerful.

This repo documents my path through the **K&R (Kernighan & Ritchie)** curriculum and my implementation of fundamental data structures from scratch.

---

## 📁 Project Roadmap

### 🏛️ The C Foundation (K&R Progress)
- **Basic Syntax & Types:** Operators, loops, and control flow.
- **Functions & Program Structure:** External variables and scope.
- **Pointers & Arrays:** Deep dive into pointer arithmetic and memory addresses.
- **Structures:** Building custom data types and complex models.
- **Input/Output:** Mastering `stdio.h` and file streams.

### 🏗️ Data Structures from Scratch
- **Binary Search Trees (BST):** Alphabetical Contact Management System with `malloc` and recursion.
- **Dynamic Lists:** Custom implementations of resizable arrays.
- **Memory Management:** Safe allocation/deallocation using `malloc`, `free`, `new`, and `delete`.

---

## 🧱 Key Projects

### 📈 [Linear Regression with C & Python Interface](./Linear%20regression/README.md)
A hybrid project showcasing a **linear regression algorithm implemented in C** with a Python test script for interfacing.
- **Features:** Train a linear regression model and predict outcomes using the compiled C code.
- **Interoperability:** Includes a `test.py` script demonstrating how to call the C functions from Python, combining C performance with Python flexibility.

### 📱 [BST Phonebook (C)](./C/phonebook.c)
A command-line application using a **Binary Search Tree** to store and search contacts.
- **Complexity:** $O(\log n)$ average time for search and insertion.
- **Features:** Alphabetical insertion using `strcmp`, In-order DFS traversal for listing, and manual Post-order heap memory cleanup.

### 📝 [Student Ledger (C)](./C/student%20ledger.c)
A persistent storage application demonstrating the use of the **Standard I/O Library** (`stdio.h`).
- **Features:** File stream management using `fopen`, `fprintf`, and `getc`.
- **Persistence:** Appends records to a `.txt` database, allowing data to survive between program executions.

### 🔢 [Vector Simulation (C++)](./C++/vector%20simulation.cpp)
A custom implementation of a dynamic array, mimicking the behavior of `std::vector` to understand how the STL manages capacity and resizing.

## 🛠 Toolset & Workflow

- **Compiler:** `gcc` for C, `g++` for C++.
- **Environment:** Linux/Unix-based CLI.
- **Memory Safety:** Manual tracking of heap allocations to prevent memory leaks (checked via `freeTree` logic).

```bash
# To compile the C Phonebook
gcc phonebook.c -o phonebook
./phonebook
```

## 🎯 The Vision

> "To understand C++ at a deeper level, one must first respect the power of C."

My goal is to complete the K&R curriculum and then transition those low-level skills into Modern C++ (C++11/14/17/20), focusing on:

- **RAII** (Resource Acquisition Is Initialization)
- **Smart Pointers** (Unique, Shared)
- **Templates & Meta-programming**
- **The STL Architecture**

## 🙌 Contributions & Learning

This is a living documentation of my computer science journey at JKUAT. Feedback on my pointer logic or memory management is always appreciated!


⭐ If you find this helpful, consider starring the repo!

