#include <stdio.h>
#include <ctype.h>

// to reverse a string
void reversestring(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// to find string length
int stringlength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// to count vowels and consonants
void countvowelsandconsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

// to convert uppercase letters to lowercase
void uppercasetolowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

// to check if a string is a palindrome
int ispalindrome(char str[]) {
    int length = stringlength(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char inputstring[100000];
    printf("Original String: %s\n", inputstring);
    scanf("%s", inputstring);  

    // reverse the string
    printf("Reversed String: ");
    reversestring(inputstring);

    // find string length
    int length = stringlength(inputstring);
    printf("Length of the string: %d\n", length);

    // count vowels and consonants
    int vowels, consonants;
    countvowelsandconsonants(inputstring, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    // convert uppercase to lowercase
    uppercasetolowercase(inputstring);
    printf("String in Lowercase: %s\n", inputstring);

    // check if the string is a palindrome
    if (ispalindrome(inputstring)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

