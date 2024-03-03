#include <stdio.h>
#include <string.h>

int remove_special_characters(char *str, char char_to_remove) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != char_to_remove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // to terminate the modified string
    return 0;
}

int extract_digits(char *str, char digit_to_remove, char *digits) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != digit_to_remove) {
            str[j++] = str[i];
        } else {
            char temp[2] ={str[i], '\0'};
            strcat(digits, temp);
        }
    }
    str[j] = '\0'; // to terminate the modified string
    return 0;
} 

int reverse_characters(char *str) {
    int size = strlen(str);
    int i, j;
    for (i = 0, j = size - 1; i < size / 2 && j >= size / 2; i++, j--) {
        char temp =  str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return 0;
}

int replace_numbers(char *digits) {
    char copy_digits[50];
    strcpy(copy_digits, digits);
    int size = strlen(copy_digits);
    digits[0] = '\0';
    
    for (int i = 0; i < size; i++) {
        if (copy_digits[i] == '1' || copy_digits[i] == '6' || copy_digits[i] == '0' || copy_digits[i] == '2' || copy_digits[i] == '4') {
            if (copy_digits[i] == '1') {
                strcat(digits, "One");
            } else if (copy_digits[i] == '6') {
                strcat(digits, "Six");
            } else if (copy_digits[i] == '0') {
                strcat(digits, "Zero");
            } else if (copy_digits[i] == '2') {
                strcat(digits, "Two");
            } else if (copy_digits[i] == '4') {
                strcat(digits, "Four");
            }
        }
    }
    return 0;
}

int caesar_cipher_decryption(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' - 3 + 26) % 26) + 'A';
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' - 3 + 26) % 26) + 'a';
        }
        i++;
    }
    return 0;
}

int count_vowel_consonants(char str[], int *vowels, int *consonants) {
    int size = strlen(str);
    for (int i = 0; i < size; i++) {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            (*vowels)++;
        } else {
            (*consonants)++;
        }
    }
    return 0;
}

int main() {
    char codeMessage[] = "R1Fg)6WQs!H0$zL2vPx^E4";

    // characters to remove
    char char_to_remove1 = ')';
    remove_special_characters(codeMessage, char_to_remove1);
    char char_to_remove2 = '!';
    remove_special_characters(codeMessage, char_to_remove2);
    char char_to_remove3 = '$';
    remove_special_characters(codeMessage, char_to_remove3);
    char char_to_remove4 = '^';
    remove_special_characters(codeMessage, char_to_remove4);

    // codeMessage after removing special characters
    printf("codeMessage after removing special characters: %s\n",codeMessage);

    // remove digits, display updated codeMessage and digits extracted
    char digits[25];
    char digit_to_remove1 = '1';
    extract_digits(codeMessage, digit_to_remove1, digits);
    char digit_to_remove2 = '6';
    extract_digits(codeMessage, digit_to_remove2, digits);
    char digit_to_remove3 = '0';
    extract_digits(codeMessage, digit_to_remove3, digits);
    char digit_to_remove4 = '2';
    extract_digits(codeMessage, digit_to_remove4, digits);
    char digit_to_remove5 = '4';
    extract_digits(codeMessage, digit_to_remove5, digits);
    printf("codeMessage after removing digits: %s\n",codeMessage);
    printf("Digits extracted: %s\n",digits);    
    
    // reverse the order of characters and display codeMessage
    reverse_characters(codeMessage);
    printf("codeMessage after reversing the characters: %s\n",codeMessage);

    // replace digits with their english word equivalance
    replace_numbers(digits);
    printf("Digits after replacing with their english word equivalance: %s\n",digits);

    // Caeser Cipher Decryption
    caesar_cipher_decryption(codeMessage);
    printf("Caesar Cipher Decryption: %s\n",codeMessage);

    // count and print no of consonants and vowels
    int vowels = 0;
    int consonants = 0;
    count_vowel_consonants(codeMessage, &vowels, &consonants);
    printf("No of Vowels: %d\nNo of Consonants: %d\n", vowels, consonants);
    
    return 0;
}
