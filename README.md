# 📘 C Programs — Practice Questions & Documentation

A collection of C programs focused on **pointers**, **functions**, and **arrays**.  
Each program below is linked to the question it solves, along with a short description of how it works.

---

## Table of Contents

| # | File | Question |
|---|------|----------|
| 1 | [minishasterribleattempt.c](#1-minishasterribleattemptc) | Increment a number by 10 using a pointer |
| 2 | [anothaone.c](#2-anothaonec) | Check if a number is even or odd using a pointer |
| 3 | [okay.c](#3-okayc) | Check if a number is prime using a pointer |
| 4 | [okaytwo.c](#4-okaytwoc) | Find the sum of all elements in an array using pointers |
| 5 | [thiswillnotworkpakkase.c](#5-thiswillnotworkpakkasec) | Find the largest element in an array using pointers |
| 6 | [thiswillnotwork.c](#6-thiswillnotworkc) | Reverse an array in-place using pointers |
| 7 | [iswearthisworks.c](#7-iswearthisworksc) | Process array elements — add 2 to even numbers and 4 to odd numbers |

---

## 1. `minishasterribleattempt.c`

### ❓ Question
> Write a C program that takes an integer as input and increments its value by 10 using a **pointer** inside a function. Print the updated value in `main()`.

### 📝 Description
- Defines a function `increment(int *n)` that dereferences a pointer to add 10 to the original variable.
- Demonstrates **pass-by-reference** using pointers so that changes inside the function reflect in `main()`.

### 💡 Concepts Covered
- Pointers & dereferencing
- Call by reference with functions

---

## 2. `anothaone.c`

### ❓ Question
> Write a C program that accepts an integer from the user and determines whether it is **even or odd** using a separate function that receives the number via a pointer.

### 📝 Description
- Defines a function `check(int *n)` that checks the parity of the number by dereferencing the pointer.
- Uses the modulo operator (`%`) to decide and prints `"even"` or `"odd"`.

### 💡 Concepts Covered
- Pointers & dereferencing
- Conditional statements (`if-else`)
- Call by reference

---

## 3. `okay.c`

### ❓ Question
> Write a C program that takes a number as input and checks whether it is a **prime number** using a function that accepts a pointer to the number.

### 📝 Description
- Defines a function `isprime(int *n)` that iterates from 2 to `n-1` to test divisibility.
- Prints `"prime"` or `"not prime"` based on the result.

### 💡 Concepts Covered
- Pointers & dereferencing
- Loops (`for`)
- Primality logic

---

## 4. `okaytwo.c`

### ❓ Question
> Write a C program that reads an array of integers from the user and calculates the **sum of all elements** using a function that accepts a pointer to the array and its size.

### 📝 Description
- Defines a function `sum(int *p, int *n)` that traverses the array via pointer arithmetic and accumulates the total.
- Returns the sum to `main()` and displays it with a formatted output.

### 💡 Concepts Covered
- Arrays and pointer arithmetic
- Passing arrays to functions via pointers
- Returning values from functions

---

## 5. `thiswillnotworkpakkase.c`

### ❓ Question
> Write a C program that reads an array of integers and finds the **largest element** in the array using a function that uses pointer arithmetic.

### 📝 Description
- Defines a function `largest(int *n, int *b)` that iterates through the array using pointer arithmetic, maintaining a running maximum.
- Returns the largest value to `main()`, which prints it.

### 💡 Concepts Covered
- Arrays and pointer arithmetic
- Finding maximum in a list
- Passing arrays to functions via pointers

---

## 6. `thiswillnotwork.c`

### ❓ Question
> Write a C program that reads an array of integers and **reverses the array in-place** using a function that operates on the array through pointers.

### 📝 Description
- Defines a function `reverse(int *p, int *b)` that swaps elements from both ends of the array moving towards the centre, using pointer arithmetic and a `temp` variable.
- Prints the original array before calling the function and the reversed array after.

### 💡 Concepts Covered
- Arrays and pointer arithmetic
- In-place reversal algorithm
- Swapping with a temporary variable

---

## 7. `iswearthisworks.c`

### ❓ Question
> Write a C program that reads an array of integers and **processes** each element: add **2** to each even number and **4** to each odd number. Use a function with pointer arithmetic to modify the array in-place.

### 📝 Description
- Defines a function `process(int *p, int *n)` that traverses the array using pointer arithmetic.
- Checks the parity of each element and applies the appropriate transformation directly to the original array.
- Prints the modified elements after processing.

### 💡 Concepts Covered
- Arrays and pointer arithmetic
- Modifying array elements in-place via pointers
- Combining conditionals with loops

---

## 🔑 Key Themes Across All Programs

| Concept | Programs That Use It |
|---|---|
| Pointers & dereferencing | All 7 programs |
| Call by reference | `minishasterribleattempt.c`, `anothaone.c`, `okay.c` |
| Array traversal with pointer arithmetic | `okaytwo.c`, `thiswillnotwork.c`, `thiswillnotworkpakkase.c`, `iswearthisworks.c` |
| Conditional logic (`if-else`) | `anothaone.c`, `okay.c`, `iswearthisworks.c` |
| Loops | `okay.c`, `okaytwo.c`, `thiswillnotwork.c`, `thiswillnotworkpakkase.c`, `iswearthisworks.c` |
| Returning values from functions | `okaytwo.c`, `thiswillnotworkpakkase.c` |

---

> **Note:** The file names are intentionally humorous (e.g., `thiswillnotwork.c`, `minishasterribleattempt.c`) — don't let them fool you, the programs work! 😄
