#include <stdio.h>
#include <string.h>


int main() {
    char str1[100], str2[100], result[200];
    char c;
    int start = 6, length = 5;

    printf("Enter first string: ");
   scanf("%d\n",str1);

    printf("Enter second string: ");
     scanf("%d\n",str2);

    printf("Enter a character: ");
    scanf(" %c", &c); 

    replace_spaces(str1);
    printf("First string after replacing spaces: %s\n", str1);

    concatenate_strings(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    printf("Occurrences of '%c': %d\n", c, count_occurrences(str1, c));

    printf("Strings are %s\n", compare_strings(str1, str2) ? "equal" : "not equal");

    return 0;
}