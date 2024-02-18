#include <stdio.h>

int main() {
    char name[50];
    printf("Hello! What's your name? ");
    scanf("%s",name);
    // My name is Firstname.

    printf("Welcome, %s!\n", name);

    char answer2[150];
    printf("Why do you want to learn C? ");
    scanf(" %[^\n]",answer2); // Notice white-space left before %[^\n]
    // I want to learn C because ...
    printf("%s\n",answer2);

    char answer3[150];
    printf("As an aspiring developer, what inspired you to pursue programming? ");
    scanf(" %[^\n]",answer3);
    // I chose programming because ...
    printf("%s\n",answer3);

    char answer4[150];
    printf("If you could create any software or application, what would it be and why? ");
    scanf(" %[^\n]",answer4);
    // I want to develop a ..... because ...
    printf("%s\n",answer4);

    char answer5[150];
    printf("As you embark on your programming journey, what positive impact do you hope to make in the tech community or beyond? ");
    scanf(" %[^\n]",answer5);
    // I would like to do ...
    printf("%s",answer5);

    return 0;
}

/*
Explanation of Solution:
In scanf:

%[ starts a character set or a scan set.
^\n inside the square brackets means "match any character except \n (newline)."
So, %[^\n] collectively means "scan and store characters until a newline character is encountered." 
The ^ in this context acts as a negation or inversion, specifying that the set of characters to match should be everything 
except the newline character.

Here's a breakdown:

%[ starts the character set.
^\n means "any character except newline."
] marks the end of the character set.

This format specifier is particularly useful when you want to read an entire line of text, including spaces, 
until a newline character is encountered. It ensures that the scanf function captures the input until the first newline character, 
allowing you to read a complete line of text.

For example, if the user enters "Hello World" and presses Enter, %[^\n] will capture the entire "Hello World" string, 
including the space. If %s were used instead, it would only capture "Hello" because %s stops reading at the first whitespace character.

And we gave whitespece before because When you use scanf to read a string using %[^\n], it reads characters until it encounters a 
newline character (\n). However, if there are any whitespace characters (like newline characters) left in the input buffer 
from previous inputs (e.g., pressing Enter), they can interfere with the reading of the string.

Adding a space before %[^\n] in the format specifier helps to consume any leading whitespace characters (including newline characters) left in the input buffer. This ensures that scanf starts reading the string from the first non-whitespace character encountered, allowing you to capture the entire line of input, even if there are leading spaces or newline characters.
*/
