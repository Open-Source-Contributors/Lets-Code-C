#include <stdio.h>

int main()
{
    char words[50];

    // Question 1
    printf("Hello! What's your name? \n");
    scanf("%s",words);
    // Answer 1
    // My name is Saurabh.

    printf("Welcome, %s!\n", words);

    // Question 2
    printf("Why do you want to learn C? \n");
    scanf(" %s", words);
    // Answer 2
    // I want to learn C because it is a powerful and versatile programming language with a rich history.
    // Mastering C provides a strong foundation for understanding computer systems and programming concepts.

    // Question 3
    printf("As an aspiring developer, what inspired you to pursue programming? \n");
    scanf(" %s", words);
    // Answer 3
    // The endless possibilities to create and solve problems through code have always fascinated me.
    // Witnessing the impact of technology on our lives motivated me to delve into programming.

    // Question 4
    printf("If you could create any software or application, what would it be and why? \n");
    scanf(" %s", words);
    // Answer 4
    // I would create an intuitive and accessible educational platform that makes learning programming enjoyable
    // for individuals of all ages and backgrounds. Empowering people with coding skills opens up numerous opportunities.

    // Question 5
    printf("As you embark on your programming journey, what positive impact do you hope to make in the tech community or beyond? \n");
    scanf(" %s", words);
    // Answer 5
    // I aspire to contribute to the tech community by creating tools and solutions that simplify complex problems,
    // promote inclusivity, and address societal challenges. Ultimately, I aim to inspire and help others through technology.

    return 0;
}