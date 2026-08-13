# 🏦 Bank Management System

A console-based **Bank Management System developed in C++** using Object-Oriented Programming (OOP) and file handling.

The project provides a simple environment for managing bank accounts and performing common banking operations such as creating accounts, depositing money, withdrawing money, searching for accounts, updating account information, and deleting accounts.

---

## 📌 Project Overview

The **Bank Management System** is a C++ console application designed to demonstrate practical applications of:

- Object-Oriented Programming
- Classes and Objects
- Functions
- Conditional Statements
- Loops
- File Handling
- Binary File Storage
- Data Searching and Management
- CRUD Operations

Account information is stored locally using a binary file instead of an external database.

---

## ✨ Features

### 👤 Account Management

- Create a new bank account
- Display account information
- Search for an account
- Update account information
- Delete an account
- Display all customer accounts

### 💰 Banking Operations

- Deposit money
- Withdraw money
- Check account balance
- Support for different account types

### 💾 Data Storage

The application uses C++ file handling to store account information locally.

```text
account.dat
```
The fstream library is used for reading and writing binary account records.


---

🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Main programming language |
| OOP | Application structure |
| Classes & Objects | Account management |
| `fstream` | File handling |
| Binary Files | Local data storage |
| `iostream` | Console input/output |
| `string` | Text data management |


---

🧠 OOP Concepts

The project demonstrates:

Classes

Objects

Encapsulation

Member Functions

File Handling

CRUD Operations

Conditional Logic

Loops



---

🗂️ Project Structure
```
Bank Management System [C++]
│
├── Bank_Management_System.cpp
├── account.dat
└── README.md

```
---

⚙️ Requirements

Any C++ compiler can be used.

Recommended:

GCC / G++

MinGW

Visual Studio

Code::Blocks

Dev-C++

Any C++ compatible IDE



---

🚀 Installation & Usage

Clone the Repository
```
git clone https://github.com/alsabai2004/Banking-System-.git
```
Compile
```
g++ Bank_Management_System.cpp -o banking_system
```
Run on Linux / Termux
```
./banking_system
```
Run on Windows
```
banking_system.exe
```

---

🏦 Main Operations

The application provides a menu-based console interface.

Typical operations include:

1. Create Account
2. Deposit
3. Withdraw
4. Search Account
5. Display Account
6. Update Account
7. Delete Account
8. Display All Accounts


---

💾 Data Storage

Account information is stored locally in:
```
account.dat
```
The application uses the C++ fstream library for binary file operations.

This approach allows the project to demonstrate file-based data management without requiring an external database server.


---

🔐 Security Notice

This project is intended for educational purposes.

It is not designed for real banking environments and currently does not provide production-level security features such as:

Password hashing

Encryption

Secure authentication

Database security

Role-based access control

Audit logging

Secure transaction processing



---

🧪 Testing

Recommended manual test cases include:

[ ] Create a valid account

[ ] Create an account with invalid input

[ ] Deposit money

[ ] Withdraw money

[ ] Attempt to withdraw more than the available balance

[ ] Search for an existing account

[ ] Search for a non-existing account

[ ] Update account information

[ ] Delete an account

[ ] Display all accounts



---

🗺️ Future Improvements

[ ] Improved input validation

[ ] Better error handling

[ ] Transaction history

[ ] Fund transfer between accounts

[ ] Customer authentication

[ ] Admin login

[ ] Password protection

[ ] Account statements

[ ] Separate Savings and Current Account classes

[ ] SQLite/MySQL database integration

[ ] Encryption

[ ] Unit testing

[ ] CMake build system

[ ] Modern C++ architecture

[ ] GUI version



---

🎯 Learning Objectives

This project demonstrates how C++ can be used to build a small real-world management system.

It is useful for practicing:

C++ Programming

Object-Oriented Programming

File Handling

Data Structures

CRUD Operations

Console Application Development

Software Design



---

👨‍💻 Author

Mohammed Najeeb Al-Sabai

Computer Networks & Cyber Security Student

GitHub: @alsabai2004


---

📄 License

This project is provided for educational and learning purposes.

You are free to study and modify the source code for educational use.
