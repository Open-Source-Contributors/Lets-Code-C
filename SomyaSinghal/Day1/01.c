#include <stdio.h>

int main() {
    char name[50];
    printf("Hello! What's your name? ");
    // Your code to get the name input here.
    scanf("%[^\n]s\n", &name);
    // Write your answer to question as comment.

    printf("Welcome, %s!\n", name);

    // Your code for the rest of the questions and their answers go here.
    char ans2[100];
    printf("Why do you want to learn C? ");
    scanf("%[^\n]s\n", &ans2);
    
    char ans3[100];
    printf("As an aspiring developer, what inspired you to pursue programming? ");
    scanf("%[^\n]s\n", &ans3);

    char ans4[100];
    printf("If you could create any software or application, what would it be and why? ");
    scanf("%[^\n]s\n", &ans4);

    char ans5[100];
    printf("As you embark on your programming journey, what positive impact do you hope to make in the tech community or beyond? ");
    scanf("%[^\n]s\n", &ans5);

    printf("Thank you :)");

    return 0;
}