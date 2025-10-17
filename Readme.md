        Student Email Management System
Overview

This is a C program that dynamically manages student email addresses. It demonstrates dynamic memory allocation using malloc, realloc, and free to store, display, and modify emails in a cohort efficiently.

Features

Store 10 email addresses entered by the user.

Display all stored emails.

Shrink the list to 6 emails using realloc().

Properly free all allocated memory to prevent leaks.

How to Run
Prerequisites

GCC compiler (MinGW on Windows, build-essential on Linux, Xcode on macOS)

Steps

Open your terminal and navigate to the project folder:

cd path/to/project


Compile the program:

gcc -o email_manager email_manager.c


Run the program:

./email_manager   # Linux/macOS
.\email_manager  # Windows PowerShell


Follow the prompts to enter 10 email addresses.

The program will:

Display all 10 emails.

Shrink the list to 6 emails and display the updated list.

Functions
Function	Description
allocateEmails()	Allocates memory for the array of email strings.
readEmails()	Reads emails from user input safely.
displayEmails()	Prints all stored emails to the console.
resizeEmails()	Shrinks the array to a new size using realloc().
freeEmails()	Frees all dynamically allocated memory.
Learning Outcomes

Understand and implement dynamic memory management in C.

Differentiate between heap memory (emails array) and stack memory (local variables).

Safely use malloc, realloc, and free.

Encapsulate logic in functions for readability and maintainability.

Example Output
Enter 10 email addresses:
Email 1: alice@mail.com
Email 2: bob@mail.com
...
Email 10: jane@mail.com

Stored Emails:
1. alice@mail.com
2. bob@mail.com
...
10. jane@mail.com

After keeping only 6 students:
1. alice@mail.com
2. bob@mail.com
...
6. frank@mail.com