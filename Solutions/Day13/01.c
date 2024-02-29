#include <stdio.h>

// Function to reverse a string
void reverse_string(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed String: %s\n", str);
}

// Function to find and print the length of a string
int string_length(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to count vowels and consonants in a string
void count_vowels_consonants(char* str) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
}

// Function to convert uppercase letters to lowercase
void uppercase_to_lowercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // ASCII conversion to lowercase
        }
    }

    printf("String in Lowercase: %s\n", str);
}

// Function to check if a string is a palindrome
int is_palindrome(char* str) {
    int length = string_length(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    // Example string
    char input_string[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", input_string);

    // Reverse a String
    reverse_string(input_string);

    // String Length
    printf("Length of the String: %d\n", string_length(input_string));

    // Count Vowels and Consonants
    count_vowels_consonants(input_string);

    // Uppercase to Lowercase
    uppercase_to_lowercase(input_string);

    // Palindrome Check
    if (is_palindrome(input_string)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
