#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100], sub[100];
    int choice;

    while (1) {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find String Length (strlen)\n");
        printf("2. Copy String (strcpy)\n");
        printf("3. Concatenate Strings (strcat)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Search Substring (strstr)\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        getchar(); // Clear the newline character left by scanf

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline
                printf("Length of the string: %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                
                int result = strcmp(str1, str2);
                if (result == 0) {
                    printf("Strings are equal.\n");
                } else if (result < 0) {
                    printf("First string is lexicographically smaller than the second.\n");
                } else {
                    printf("First string is lexicographically greater than the second.\n");
                }
                break;

            case 5:
                printf("Enter main string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter substring to search: ");
                fgets(sub, sizeof(sub), stdin);
                sub[strcspn(sub, "\n")] = '\0';
                
                char *ptr = strstr(str1, sub);
                if (ptr != NULL) {
                    printf("Substring found at index: %ld\n", ptr - str1);
                } else {
                    printf("Substring not found.\n");
                }
                break;

            case 6:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice! Please select a number between 1 and 6.\n");
        }
    }

    return 0;
}