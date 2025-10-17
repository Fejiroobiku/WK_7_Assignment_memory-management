#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMAIL_LENGTH 50  // 49 chars + 1 for '\0'

// Allocate memory for n emails
char** allocateEmails(int n) {
    char **emails = (char**) malloc(n * sizeof(char*));
    if (emails == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        emails[i] = (char*) malloc(MAX_EMAIL_LENGTH * sizeof(char));
        if (emails[i] == NULL) {
            printf("Memory allocation failed for email %d!\n", i);
            exit(1);
        }
    }
    return emails;
}

// Read n emails from user
void readEmails(char **emails, int n) {
    printf("Enter %d email addresses:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Email %d: ", i + 1);
        fgets(emails[i], MAX_EMAIL_LENGTH, stdin);
        // Remove newline character if present
        size_t len = strlen(emails[i]);
        if (len > 0 && emails[i][len - 1] == '\n') {
            emails[i][len - 1] = '\0';
        }
    }
}

// Display emails
void displayEmails(char **emails, int n) {
    printf("\nStored Emails:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, emails[i]);
    }
}

// Resize the array of emails
char** resizeEmails(char **emails, int oldSize, int newSize) {
    // Free memory for emails that will be removed
    if (newSize < oldSize) {
        for (int i = newSize; i < oldSize; i++) {
            free(emails[i]);
        }
    }

    char **newEmails = (char**) realloc(emails, newSize * sizeof(char*));
    if (newEmails == NULL) {
        printf("Re-allocation failed!\n");
        exit(1);
    }
    return newEmails;
}

// Free all allocated memory
void freeEmails(char **emails, int n) {
    for (int i = 0; i < n; i++) {
        free(emails[i]);
    }
    free(emails);
}

int main() {
    int initialSize = 10;
    int newSize = 6;
    char **emails;

    // Step 1: Allocate memory for 10 emails
    emails = allocateEmails(initialSize);

    // Step 2: Read emails from user
    readEmails(emails, initialSize);

    // Step 3: Display all 10 emails
    displayEmails(emails, initialSize);

    // Step 4: Shrink the array to hold only 6 emails
    emails = resizeEmails(emails, initialSize, newSize);

    // Step 5: Display the updated list of 6 emails
    printf("\nAfter keeping only 6 students:\n");
    displayEmails(emails, newSize);

    // Step 6: Free all allocated memory
    freeEmails(emails, newSize);

    return 0;
}
