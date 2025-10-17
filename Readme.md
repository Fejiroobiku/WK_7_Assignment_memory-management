Student Email Management System
Overview

A C program to manage student email addresses dynamically. It demonstrates dynamic memory allocation (malloc, realloc, free) to store, display, and modify emails for a cohort.

Features

Stores 10 emails entered by the user.

Displays all stored emails.

Shrinks the list to 6 emails using realloc().

Frees all allocated memory to prevent leaks.

How to Run

Compile:

gcc -o email_manager email_manager.c


Run:

.\email_manager


Enter 10 emails. The program displays all 10, then shrinks and displays 6 emails.

Functions

allocateEmails(): Allocates memory for email array.

readEmails(): Reads user input.

displayEmails(): Prints emails.

resizeEmails(): Shrinks the array.

freeEmails(): Frees memory.