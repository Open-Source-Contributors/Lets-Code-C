#include <stdio.h>

int main()
{
    // here we declare a Array "name" variabe with limits 50 words
    char name[50];
    printf("Hello! What's your name? ");
    // by using scanf()we are taking input of Q1
    scanf("%s",name);
    printf("Welcome, %s!\n", name);

// My name is SparshKotiya.

    char ans2[250];
    printf("Why do you want to learn C?\n");
    scanf("%s",ans2);
    printf("thank you for the answer\n");

// I want to learn c because first of all it is syllabus and secondthing it is low level language and deals at memory level.

    char ans3[250];
    printf("As an aspiring developer, what inspired you to pursue programming?\n");
    scanf("%s",ans3);
    printf("thank you for the answer\n");

// There are only two thing which inspired me as a developer first is here we deals with technology and develop new things that
// add value in life of user and second is one of my family member is also a developer so what is more inspiring more than this.

    char ans4[250];
    printf("If you could create any software or application, what would it be and why?\n");
    scanf("%s",ans4);
    printf("thank you for the answer\n");

// I likey to work any software or application which is based on where AI but as a newbe i love to work any type of software or application
// and after all ultimate goal of is to add some value to the society.

    char ans5[250];
    printf("As you embark on your programming journey, what positive impact do you hope to make in the tech community or beyond?\n");
    scanf("%s",ans5);
    printf("thank you for the answer\n");

// I want just everyone this and learn new tech and help each other to grow.


    return 0;
}

/*
Scores:
1. Successfully Submitted: 5/5

2. Correctness of the Code: 0/5
  --Comment: %s is only used for one string.

3. Coding Standards Adherence: 4/5
  --Comment: Consider improving code output cleanliness for enhanced readability.

Total Score: 9/15
*/
