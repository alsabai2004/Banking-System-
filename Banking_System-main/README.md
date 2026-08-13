أكيد. وبما أن مشروعك تم تطويره الآن إلى Modular C++ Architecture وفيه include/ وsrc/ وdocs/، فهذا README أحدث وأنسب من النسخة القديمة:

# 🏦 Banking System in C++

A terminal-based **Banking Management System developed in C++** using Object-Oriented Programming (OOP).

The project simulates a banking environment where users, companies, and banking employees can manage accounts, perform financial transactions, transfer funds, request loans, and manage banking operations.

The project was originally implemented as a monolithic C++ application and is now being gradually refactored into a **modular and maintainable architecture**.

---

## 📌 Project Overview

The Banking System demonstrates the practical application of advanced **Object-Oriented Programming concepts in C++**.

The system supports different types of clients and banking employees, each with different responsibilities and permissions.

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
- Transfer funds
- Login using User ID and PIN

---

### 🏢 Company Client

- Create a Company Client account
- Store company information
- Deposit funds
- Withdraw funds
- View account balance
- View transaction history
- Transfer funds
- Request loans
- Login using User ID and PIN
- Manage authorized company employees

---

### 👨‍💼 Banking Employee

Banking employees provide administrative banking operations such as:

- Login using User ID and password
- View client accounts
- Approve account applications
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
- Constructors and Destructors
- Virtual Functions
- Method Overriding
- Member Functions

---

## 🏦 Account Types

The system provides different account types with different daily withdrawal limits.

| Account Type | Daily Withdrawal Limit |
|---|---:|
| 🥉 Bronze | 100,000 |
| 🥇 Gold | 500,000 |
| 🏢 Business | 20,000,000 |

The account types are implemented using inheritance from the abstract `AccountType` class.

```text
                AccountType
                     │
        ┌──────────┼──────────┐
        ▼           ▼           ▼
     Bronze        Gold        Business

```
---


## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Main programming language |
| C++17 | Language standard |
| OOP | Application architecture |
| Classes & Objects | Banking entity modeling |
| Inheritance | Class specialization and code reuse |
| Polymorphism | Supporting different object behaviors |
| Encapsulation | Data organization and protection |
| Abstraction | Hiding implementation details |
| Standard C++ Library | Core application functionality |
| Git & GitHub | Version control and project hosting |
| GCC / G++ | Compilation |
| Terminal / Console | User interface |
| Modular Architecture | Separating headers and source files |
| CMake | Build system configuration |


---

🗂️ Project Structure

The project is being migrated from a monolithic architecture to a modular C++ structure.
```
Banking-System-/
│
├── main.cpp
├── README.md
├── LICENSE
│
├── include/
│   ├── AccountType.h
│   ├── Bronze.h
│   ├── Gold.h
│   ├── Business.h
│   ├── User.h
│   ├── UserClient.h
│   ├── CompanyClient.h
│   ├── BankEmployee.h
│   ├── Card.h
│   ├── Transaction.h
│   ├── Loan.h
│   └── cardWarning.h
│
├── src/
│   ├── AccountType.cpp
│   ├── Bronze.cpp
│   ├── Gold.cpp
│   ├── Business.cpp
│   ├── User.cpp
│   ├── UserClient.cpp
│   ├── CompanyClient.cpp
│   ├── BankEmployee.cpp
│   ├── Card.cpp
│   ├── Transaction.cpp
│   ├── Loan.cpp
│   └── cardWarning.cpp
│
└── docs/
    ├── ARCHITECTURE.md
    ├── main_monolithic.cpp
    └── Class documentation
```

---

🏗️ Architecture

Current Architecture

The original application was implemented primarily inside:
```
main.cpp
```
The original implementation has been preserved for reference.

Modular Architecture

The project is gradually being separated into:
```
                    Banking System
                            │
              ┌───────────┴───────────┐
              │                           │
           include/                      src/
              │                           │
        Header Files               Implementations
              │                           │
              └───────────┬───────────┘
                            │
                        main.cpp
```
This structure makes the project easier to maintain, understand, test, and extend.


---

🔐 Authentication

Different user roles use different authentication mechanisms.

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

The system supports common banking operations such as:
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

👥 Client Types

The system is designed around three main categories:
```
                      Banking System
                             │
          ┌───────────────┼───────────────┐
          │                  │                 │
          ▼                 ▼                 ▼
    User Client      Company Client      Bank Employee
```
Each category has different responsibilities and permissions.


---

💳 Transaction Management

The system provides financial transaction functionality including:

Deposits

Withdrawals

Fund transfers

Transaction history

Account balance management


Transactions are associated with banking accounts and clients.


---

🏢 Company Banking

Company clients have additional capabilities such as:

Company account management

Employee access

Loan requests

Fund transfers

Transaction tracking



---

👨‍💼 Employee Management

Bank employees operate on the administrative side of the banking system.

They can:

Review client accounts

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

Recommended test scenarios:
```
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
```

---

⚙️ Requirements

To compile and run the project, you need a modern C++ compiler.

Recommended:

GCC / G++

MinGW

Visual Studio

Code::Blocks

Dev-C++

Termux + Clang/G++


The project targets C++17.


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

For the original monolithic version:
```
g++ -std=c++17 main.cpp -o banking_system
```
Run on Linux / Termux
```
./banking_system
```
Windows
```
banking_system.exe
```

---

🔨 Modular Build

The modular architecture is currently under gradual refactoring.

Once the modular implementation is completed, the project will support compiling the separated source files together:
```
g++ -std=c++17 main.cpp src/*.cpp -Iinclude -o banking_system
```
> The modular refactoring is being performed gradually while preserving the original application behavior.




---

📊 Core Classes

The project currently contains the following major classes:
```
User
│
├── UserClient
├── CompanyClient
└── BankEmployee

AccountType
│
├── Bronze
├── Gold
└── Business

Card
Transaction
Loan
cardWarning
```

---

📚 Documentation

Project architecture and development documentation are available inside:
```
docs/
```
Important documentation includes:
```
docs/ARCHITECTURE.md
docs/main_monolithic.cpp
```
main_monolithic.cpp preserves the original monolithic implementation for reference during the refactoring process.


---

🔒 Security Notice

This project is intended for educational purposes.

It demonstrates banking concepts and Object-Oriented Programming using C++ and should not be considered production-ready banking software.

A real banking system would require additional security mechanisms such as:

Secure password hashing

Encryption

Multi-factor authentication

Secure database storage

Role-Based Access Control

Audit logging

Secure transaction processing

Network security

Input validation

Fraud detection

Secure API communication



---

🗺️ Future Improvements

[x] Begin modular source/header architecture

[x] Separate account type classes

[x] Separate client and employee classes

[x] Preserve original monolithic implementation

[ ] Complete modular refactoring

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

[ ] Complete CMake build system

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

Modular Architecture

Console Application Development



---

📈 Development Approach

The project follows a gradual refactoring strategy:
```
Monolithic Application
        │
        ▼
Preserve Original Version
        │
        ▼
Extract Classes
        │
        ▼
Create Header Files
        │
        ▼
Create Source Files
        │
        ▼
Modular C++ Architecture
        │
        ▼
Testing & Improvements
```
The goal is to improve maintainability without unnecessarily changing the original application's behavior.


---

👨‍💻 Author

Mohammed Najeeb Al-Sabai

Computer Networks & Cyber Security Student

GitHub: @alsabai2004


---

📄 License

This project is licensed under the MIT License.

See the LICENSE file for more information.


---

⭐ If you find this project useful, feel free to explore the source code and documentation.
