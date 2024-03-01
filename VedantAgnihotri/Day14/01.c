#include <stdio.h>
#include <string.h>

// function to replace spaces with underscores
void replace_spaces(char str[]) {
    for(int i = 0; str[i]; i++) {
        if(str[i] == ' ')
            str[i] = '_';
    }
    printf("Replaced spaces: %s\n", str);
}

// function to concatenate two strings
void concatenate_strings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// function to count occurrences of a character
void count_occurrences(char str[], char c) {
    int count = 0;
    for(int i = 0; str[i]; i++) {
        if(str[i] == c)
            count++;
    }
    printf("Occurrences of '%c': %d\n", c, count);
}
// function to compare two strings
void compare_strings(char str1[], char str2[]) {
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}
// function to extract a substring
void substring_extraction(char str[]) {
    char substr[6];
    strncpy(substr, &str[6], 5);
    substr[5] = '\0';
    printf("Extracted substring: %s\n", substr);
}

int main() {
    char str1[100], str2[100], c;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0'; 

    replace_spaces(str1);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0'; 

    concatenate_strings(str1, str2);

    printf("Enter a character: ");
    scanf(" %c", &c);

    count_occurrences(str1, c);

    compare_strings(str1, str2);

    substring_extraction(str1);

    return 0;
}
