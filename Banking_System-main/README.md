# 🏦 Banking System in C++

A terminal-based **Banking Management System developed in C++** using Object-Oriented Programming (OOP).

The project simulates a banking environment where users, companies, and banking employees can manage accounts, perform financial transactions, transfer funds, view transaction history, and manage banking operations.

---

## 📌 Project Overview

The Banking System is designed to demonstrate the practical application of advanced Object-Oriented Programming concepts in C++.

The system supports different types of clients and banking employees, with different permissions and operations.

The application is completely **terminal-based**.

---

## ✨ Features

### 👤 User Client

- Create a User Client account
- Store personal information
- Deposit funds
- Withdraw funds
- View account balance
- View transaction history
- Transfer funds to other User Client accounts
- Login using User ID and PIN

---

### 🏢 Company Client

- Create a Company Client account
- Store company information
- Deposit funds
- Withdraw funds
- View account balance
- View transaction history
- Transfer funds to User Client accounts within the company
- Request loans from the bank
- Login using User ID and PIN
- Allow authorized company employees to access the account

---

### 👨‍💼 Banking Employee

Banking employees have administrative capabilities such as:

- Login using User ID and password
- View client accounts
- Approve new account applications
- Reject account applications
- Approve company loan requests
- Reject company loan requests
- View transaction history
- Freeze accounts
- Close accounts

---

## 🧠 Object-Oriented Programming Concepts

The project demonstrates several important OOP concepts:

- **Abstraction**
- **Encapsulation**
- **Inheritance**
- **Polymorphism**
- **Association**
- **Aggregation**
- **Composition**
- Classes and Objects
- Member Functions

---

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Main programming language |
| OOP | Application architecture |
| Classes & Objects | Modeling banking entities |
| Inheritance | Reusing common functionality |
| Polymorphism | Supporting different object behaviors |
| Encapsulation | Protecting and organizing data |
| Abstraction | Hiding implementation details |
| Association | Relationships between objects |
| Aggregation | Object relationships |
| Composition | Strong object ownership |
| Standard C++ Library | Core programming functionality |
| Terminal / Console | User interface |

---

## 🗂️ Project Structure

```text
Banking_System-main/
│
├── main.cpp
├── README.md
├── Description.pdf
└── LICENSE
```

---

⚙️ Requirements

To compile and run the project, you need a C++ compiler.

Recommended:

GCC / G++

MinGW

Visual Studio

Code::Blocks

Dev-C++

Any modern C++ compiler



---

🚀 Installation & Usage

Clone the Repository
```
git clone https://github.com/alsabai2004/Banking-System-.git
```
Navigate to the Project
```
cd Banking-System-/Banking_System-main
```
Compile
```
g++ main.cpp -o banking_system
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

🔐 Authentication

The system provides authentication mechanisms for different types of users.

User Client
```
User ID
PIN
```
Company Client
```
User ID
PIN
```
Banking Employee
```
User ID
Password
```
Access to banking operations depends on the user's role.


---

💰 Banking Operations

The system supports several common banking operations:
```
Create Account
Deposit
Withdraw
Transfer Funds
View Balance
View Transaction History
Request Loan
Approve Account
Reject Account
Freeze Account
Close Account

```
---

🏦 Client Types

The system is designed around three main categories:
```
                  Banking System
                         │
          ┌────────────┼────────────┐
          │              │              │
          ▼             ▼              ▼
        User          Company        Employee
       Client          Client
```
Each category has its own responsibilities and permissions.


---

📊 Transaction Management

Users can perform financial operations such as:

Deposits

Withdrawals

Fund transfers


The system also provides transaction history for accounts.


---

🏢 Company Banking

Company clients have additional banking capabilities, including:

Company account management

Employee access

Loan requests

Fund transfers within the company

Transaction tracking



---

👨‍💼 Employee Management

Bank employees can manage banking operations from the administrative side.

Employees can:

Review accounts

Approve accounts

Reject accounts

Review loan requests

Approve loans

Reject loans

View transactions

Freeze accounts

Close accounts



---

🧪 Testing

Recommended test scenarios include:

[ ] Create User Client

[ ] Create Company Client

[ ] Login with valid credentials

[ ] Reject invalid credentials

[ ] Deposit funds

[ ] Withdraw funds

[ ] Transfer funds

[ ] View balance

[ ] View transaction history

[ ] Request a company loan

[ ] Approve an account

[ ] Reject an account

[ ] Freeze an account

[ ] Close an account



---

🔒 Security Notice

This project is intended for educational purposes and demonstrates banking concepts using C++.

It should not be considered production-ready banking software.

A real banking system would require additional security mechanisms such as:

Secure password hashing

Encryption

Multi-factor authentication

Secure database storage

Access control

Audit logging

Secure transaction processing

Network security

Input validation

Fraud detection



---

🗺️ Future Improvements

[ ] Separate source and header files

[ ] Improve project architecture

[ ] Add persistent database storage

[ ] Add SQLite/MySQL support

[ ] Improve authentication

[ ] Password hashing

[ ] Encryption

[ ] Advanced transaction history

[ ] Account statements

[ ] Better input validation

[ ] Exception handling

[ ] Unit testing

[ ] CMake build system

[ ] GUI interface

[ ] REST API

[ ] Web-based banking interface



---

🎯 Learning Objectives

This project demonstrates how C++ and Object-Oriented Programming can be used to model a real-world banking system.

It is useful for practicing:

C++ Programming

Object-Oriented Programming

Software Design

Class Design

Inheritance

Polymorphism

Encapsulation

Abstraction

Object Relationships

Financial Transaction Modeling

Console Application Development



---

📚 Project Documentation

Additional project documentation is available in:
```
Description.pdf
```

---

👨‍💻 Author

Mohammed Najeeb Al-Sabai

Computer Networks & Cyber Security Student

GitHub: @alsabai2004


---

📄 License

This project is licensed under the MIT License.

See the LICENSE file for more information.
