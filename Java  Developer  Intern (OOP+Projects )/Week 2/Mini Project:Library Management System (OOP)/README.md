# 📚 Library Management System

## 📌 Project Description
The **Library Management System** is a menu-driven Java console application developed using Object-Oriented Programming (OOP) concepts. It allows users to add books, add users, borrow books, return books, and display book and user details.

---

## 🎯 Features
- Add Book
- Add User
- Display Book Details
- Display User Details
- Borrow Book
- Return Book
- Menu-Driven Interface

---

## 🛠 Technologies Used
- Java
- Object-Oriented Programming (OOP)
- Scanner Class
- Console-Based Application

---

## 📂 Classes Used

### 1. Library
- Parent class
- Stores library information
- Displays library details

### 2. Book
- Inherits from `Library`
- Stores book ID, title, and availability
- Performs borrow and return operations

### 3. User
- Inherits from `Library`
- Stores user ID and user name
- Displays user details

### 4. Main
- Contains the `main()` method
- Implements the menu-driven program

---

## 💡 OOP Concepts Used

### Encapsulation
- Private data members are used.
- Data is accessed through public methods.

### Inheritance
- `Book` extends `Library`
- `User` extends `Library`

### Abstraction
- Users interact with methods such as `borrowBook()`, `returnBook()`, and `displayBook()` without needing to know the internal implementation.

---

## ▶️ Menu

```text
===== Library Management System =====
1. Add Book
2. Add User
3. Display Book
4. Display User
5. Borrow Book
6. Return Book
7. Exit
```
