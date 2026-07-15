# Bank Management System in C

A modular bank management system written in pure C.

This project was developed as part of an introductory C programming course and demonstrates modular software design, dynamic memory management, pointers, structures, input validation, and basic software testing through a console-based banking application.

---

# Preview

## Main Menu

![Main Menu](assets/Image%201.png)

---

## Account Operations

![Account Operations](assets/Image%202.png)

---

## Validation Driver

The project includes a validation program that verifies the correctness of the core banking library.

![Validation Driver](assets/Image%203.png)

---

# Features

- Register an account holder
- Deposit money
- Withdraw available balance
- Change the account PIN
- Display account information
- Dynamic memory allocation for customer names
- Modular project architecture
- Validation driver for automated testing

---

# Concepts Demonstrated

- Structures (`struct`)
- Pointers
- Dynamic memory allocation (`malloc` / `free`)
- String manipulation
- Input validation
- Modular programming
- Header files
- Defensive programming
- Separation of concerns

---

# Project Structure

```text
Bank-Management-System-C/
│
├── assets/
│   ├── Image 1.png
│   ├── Image 2.png
│   └── Image 3.png
│
├── include/
│   ├── banco.h
│   ├── cajero.h
│   └── utilidades.h
│
├── src/
│   ├── banco.c
│   ├── cajero.c
│   ├── main.c
│   └── utilidades.c
│
├── tests/
│   └── driver_validacion.c
│
├── LICENSE
└── README.md
```

---

# Build

Compile using GCC.

```bash
gcc src/*.c -Iinclude -o bank
```

Run the application.

```bash
./bank
```

---

# Validation

The repository includes a validation program located in:

```text
tests/driver_validacion.c
```

It verifies:

- Account initialization
- Dynamic memory allocation
- Deposits
- Withdrawals
- PIN updates
- Memory cleanup

This makes it easier to verify that every core banking operation behaves as expected after future modifications.

---

# Software Design

The application is organized into independent modules.

## Banking Module

Responsible for the business logic.

- Account initialization
- Deposits
- Withdrawals
- PIN management
- Account information

## Utility Module

Responsible for user interaction.

- Menus
- Navigation
- Input validation
- Console formatting

## Validation Module

Contains a dedicated testing program used to validate the banking library independently from the user interface.

---

# Learning Objectives

This project was developed to practice:

- Modular software development
- Pointer manipulation
- Manual memory management
- Dynamic allocation
- Data abstraction with structures
- Function decomposition
- Maintainable software architecture

---

# Academic Note

This project was completed as part of an introductory C programming course.

Some starter files and interfaces—including portions of the project skeleton and the validation driver—were provided as part of the course assignment.

The banking logic, menu system, utility functions, dynamic memory management, and overall application behavior were implemented by me.

---

# Future Improvements

Some possible future extensions include:

- File-based persistence
- Support for multiple bank accounts
- User authentication
- Transaction history
- Account creation and deletion
- Improved input validation
- Makefile
- Unit testing framework
- Cross-platform support

---

# License

Licensed under the MIT License.

See the **LICENSE** file for more information.
