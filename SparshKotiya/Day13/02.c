// C program that converts all uppercase letters in a string to lowercase.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert uppercase letters to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    

    // Output converted string
    printf("String in lowercase: %s\n", str);

    return 0;
}
