# Bank Management System in C

A modular banking management system developed in pure C.

This project was built as part of an introductory C programming course and focuses on applying core programming concepts through a console-based banking application.

The implementation demonstrates modular software design, dynamic memory management, structures, pointers, input validation, and basic software testing.

---

## Features

- Register an account holder
- Deposit money into an account
- Withdraw available balance
- Change the account PIN
- Display account information
- Dynamic memory allocation for customer names
- Modular architecture using header and source files
- Validation driver for functional testing

---

## Concepts Demonstrated

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

## Project Structure

```
Bank-Management-System-C/
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
└── README.md
```

---

## Build

Compile the application with GCC:

```bash
gcc src/*.c -Iinclude -o bank
```

And just run the program:

```bash
./bank
```

---

## Validation

The repository includes a validation driver located in:

```text
tests/driver_validacion.c
```

The driver verifies several core functionalities, including:

- Account initialization
- Dynamic memory allocation
- Deposits
- Withdrawals
- PIN updates
- Memory cleanup

---

## Design

The project is divided into three main modules.

### Core Banking Logic

Responsible for account management operations.

- Account initialization
- Deposits
- Withdrawals
- PIN management
- Account information

### User Interface

Handles all interaction with the user.

- Menus
- Input
- Output
- Navigation

### Validation

Provides a simple testing program to verify that the banking library behaves correctly.

---

## Learning Objectives

This project was developed to practice fundamental C programming concepts, including:

- Modular software development
- Working with pointers
- Manual memory management
- Data abstraction using structures
- Function decomposition
- Building maintainable console applications

---

## Academic Note

This repository contains my implementation of the banking system developed during an introductory C programming course.

Some starter files and interfaces were provided as part of the course assignment, including portions of the project skeleton and the validation driver used for testing.

The banking logic, menu implementation, utility functions, dynamic memory management, and application behavior were implemented by me.

---

## Future Improvements

Possible future enhancements include:

- Persistent storage using files
- Multiple bank accounts
- User authentication
- Transaction history
- Account creation and deletion
- Better error handling
- Makefile support
- Unit testing framework

---

## License

This project is intended for educational purposes.
