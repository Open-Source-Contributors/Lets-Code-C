#include <stdio.h>
#include <string.h>

// Function to replace spaces with underscores
void replace_spaces(char *str) {
    while (*str) {
        if (*str == ' ') {
            *str = '_';
        }
        str++;
    }
}

// Function to concatenate two strings
void concatenate_strings(char *str1, char *str2, char *result) {
    strcpy(result, str1);
    strcat(result, str2);
}

// Function to count occurrences of a character in a string
int count_occurrences(char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

// Function to compare two strings
int compare_strings(char *str1, char *str2) {
    return strcmp(str1, str2);
}

// Function to extract a substring from a given string
void extract_substring(char *str, int start, int length, char *result) {
    strncpy(result, str + start, length);
    result[length] = '\0'; // Null-terminate the result string
}

int main() {
    char input_string[100]; // Assuming a maximum length of 99 characters for the input string
    char input_string2[100];
    char result_string[200]; // Assuming a maximum length of 199 characters for the result string

    // Replace Spaces
    printf("Enter a string to replace spaces: ");
    scanf(" %99[^\n]", input_string);
    replace_spaces(input_string);
    printf("After replacing spaces: %s\n", input_string);

    // Concatenate Strings
    printf("Enter the first string for concatenation: ");
    scanf(" %99[^\n]", input_string);
    printf("Enter the second string for concatenation: ");
    scanf(" %99[^\n]", input_string2); // Notice the space before % to consume the newline character
    concatenate_strings(input_string, input_string2, result_string);
    printf("Concatenated string: %s\n", result_string);

    // Count Occurrences
    printf("Enter a string for count of a character occurrences: ");
    scanf(" %99[^\n]", input_string);
    char ch;
    printf("Enter a character to count occurrences: ");
    scanf(" %c", &ch);
    int occurrences = count_occurrences(input_string, ch);
    printf("Occurrences of '%c' in the string: %d\n", ch, occurrences);

    // Compare Strings
    printf("Enter the first string for comparision: ");
    scanf(" %99[^\n]", input_string);
    printf("Enter the second string for comparision: ");
    scanf(" %99[^\n]", result_string);
    int comparison_result = compare_strings(input_string, result_string);
    if (comparison_result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Substring Extraction
    printf("Enter a string for substring extraction: ");
    scanf(" %99[^\n]", input_string);
    extract_substring(input_string, 6, 5, result_string);
    printf("Extracted substring: %s\n", result_string);

    return 0;
}
