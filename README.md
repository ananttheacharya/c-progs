# 📘 C Programs — Practice Questions & Documentation

A collection of C programs focused on **pointers**, **functions**, **arrays**, **strings**, and **structures**.  
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
| 8 | [armstrongnumber.c](#8-armstrongnumberc) | Print all Armstrong numbers between 1 and 500 |
| 9 | [dumbsquarebs.c](#9-dumbsquarebsc) | Calculate the square of a number using a function |
| 10 | [okayletssee.c](#10-okayletsseec) | Reverse a string and print it character by character |
| 11 | [what about this .c](#11-what-about-this-c) | Menu-driven program for sum, factorial, and prime check |
| 12 | [structure 1 .c](#12-structure-1-c) | Store and display student details using a structure |
| 13 | [structure 2.c](#13-structure-2c) | Calculate a batsman's batting average using a structure and pointer |

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

## 8. `armstrongnumber.c`

### ❓ Question
> Write a C program that finds and prints all **Armstrong numbers** between 1 and 500. A number is Armstrong if the sum of the cubes of its digits equals the number itself.

### 📝 Description
- Loops through every number from 1 to 500.
- For each number, extracts digits, cubes them, and sums up the cubes.
- Prints the number if the sum equals the original number.

### 💡 Concepts Covered
- Loops (`for`, `while`)
- Digit extraction using modulo and division
- Number theory (Armstrong / narcissistic numbers)

---

## 9. `dumbsquarebs.c`

### ❓ Question
> Write a C program that takes an integer as input and prints its **square** using a separate `square()` function that returns the result.

### 📝 Description
- Defines a function `square(int a)` that computes and returns `a * a`.
- Calls the function from `main()` and displays the result.

### 💡 Concepts Covered
- Functions with return values
- Passing arguments to functions
- Basic arithmetic

---

## 10. `okayletssee.c`

### ❓ Question
> Write a C program that accepts a string from the user and prints it in **reverse order**, character by character.

### 📝 Description
- Reads a string using `scanf()`.
- Uses `strlen()` to find the length, then loops from the last character to the first, printing each character.

### 💡 Concepts Covered
- Strings and `strlen()`
- Loops (`for`)
- Character-by-character string traversal

---

## 11. `what about this .c`

### ❓ Question
> Write a **menu-driven** C program that offers three options: (1) find the sum of two numbers, (2) find the factorial of a number, and (3) check if a number is prime. Use separate functions for each operation.

### 📝 Description
- Presents a menu and reads the user's choice using `scanf()`.
- Uses a `switch` statement to dispatch to the appropriate function: `sum()`, `factorial()`, or `prime()`.
- Each function handles its own input and output.

### 💡 Concepts Covered
- `switch` statements
- Menu-driven programs
- Functions (sum, factorial, prime check)
- Loops

---

## 12. `structure 1 .c`

### ❓ Question
> Write a C program using a **structure** to store a student's admission number, name, and marks in three subjects (English, Maths, Science). Calculate and display the total marks.

### 📝 Description
- Defines a `struct student` with fields for admission number, name, and three subject marks, plus a `total`.
- Reads all details from the user, computes the total in `main()`, and prints a formatted summary.

### 💡 Concepts Covered
- Structures (`struct`)
- Structure members and the dot (`.`) operator
- Input/output with `scanf()` and `printf()`

---

## 13. `structure 2.c`

### ❓ Question
> Write a C program using a **structure** to store a batsman's details (code, name, innings, not-outs, runs) and compute his **batting average** using a function that accepts a pointer to the structure.

### 📝 Description
- Defines a `struct batsman` with relevant cricket statistics.
- Passes a pointer to the structure into `calcavg()`, which computes `runs / (innings - notout)` using the `->` operator.
- Handles the edge case where `innings == notout` to avoid division by zero.

### 💡 Concepts Covered
- Structures (`struct`)
- Pointers to structures and the arrow (`->`) operator
- Functions with structure pointers
- Edge case handling

---

## 🔑 Key Themes Across All Programs

| Concept | Programs That Use It |
|---|---|
| Pointers & dereferencing | `minishasterribleattempt.c`, `anothaone.c`, `okay.c`, `okaytwo.c`, `thiswillnotwork.c`, `thiswillnotworkpakkase.c`, `iswearthisworks.c`, `structure 2.c` |
| Call by reference | `minishasterribleattempt.c`, `anothaone.c`, `okay.c`, `structure 2.c` |
| Array traversal with pointer arithmetic | `okaytwo.c`, `thiswillnotwork.c`, `thiswillnotworkpakkase.c`, `iswearthisworks.c` |
| Conditional logic (`if-else`) | `anothaone.c`, `okay.c`, `iswearthisworks.c`, `what about this .c`, `structure 2.c` |
| Loops | `okay.c`, `okaytwo.c`, `thiswillnotwork.c`, `thiswillnotworkpakkase.c`, `iswearthisworks.c`, `armstrongnumber.c`, `okayletssee.c`, `what about this .c` |
| Returning values from functions | `okaytwo.c`, `thiswillnotworkpakkase.c`, `dumbsquarebs.c`, `what about this .c` |
| Strings & `strlen()` | `okayletssee.c` |
| Structures (`struct`) | `structure 1 .c`, `structure 2.c` |
| Switch / menu-driven logic | `what about this .c` |
| Number theory (Armstrong) | `armstrongnumber.c` |

---

> **Note:** The file names are intentionally humorous (e.g., `thiswillnotwork.c`, `minishasterribleattempt.c`) — don't let them fool you, the programs work! 😄
