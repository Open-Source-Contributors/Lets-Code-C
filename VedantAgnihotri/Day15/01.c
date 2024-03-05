#include <stdio.h>
#include <string.h>
#include <ctype.h>

// to remove special characters from the message
void removing_special_characters(char str[]) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Message after removing special characters: %s\n", str);
}

//to extract digits from the message
void extract_digits(char str[]) {
    printf("Extracted digits from the message: ");
    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

// to reverse words in the message
void reverse_words(char str[]) {
    printf("Reversed message: ");
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

//  to replace numbers with English word equivalents
void replace_numbers(char str[]) {
    printf("Extracted digits with English word equivalents: ");
    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            switch (str[i]) {
                case '0':
                    printf("Zero ");
                    break;
                case '1':
                    printf("One ");
                    break;
                case '2':
                    printf("Two ");
                    break;
                case '3':
                    printf("Three ");
                    break;
                case '4':
                    printf("Four ");
                    break;
                case '5':
                    printf("Five ");
                    break;
                case '6':
                    printf("Six ");
                    break;
                case '7':
                    printf("Seven ");
                    break;
                case '8':
                    printf("Eight ");
                    break;
                case '9':
                    printf("Nine ");
                    break;
            }
        }
    }
    printf("\n");
}

// to decrypt the message
void caesar_cipher_decryption_of_message(char str[]) {
    printf("Deciphered message using Caesar Cipher: ");
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char decryptedChar = 'A' + ((str[i] - 'A' + 23) % 26);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

// to count vowels and consonants 
void count_vowels_and_consonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

int main() {
    char coded_message[] = "R1Fg)6WQs!H0$zL2vPx^E4";
    printf("Original Message: %s\n", coded_message);

    // Remove Special Characters
    removing_special_characters(coded_message);

    //  Extract Digits
    extract_digits(coded_message);

    // Reverse Words
    reverse_words(coded_message);

    // Replace Numbers
    replace_numbers(coded_message);

    // Caesar Cipher Decryption
    caesar_cipher_decryption_of_message(coded_message);

    //  Count Vowels and Consonants
    count_vowels_and_consonants(coded_message);

    return 0;
}
