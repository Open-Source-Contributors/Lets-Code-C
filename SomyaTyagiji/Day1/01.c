#include<stdio.h>
int main()
{ 
    char name[50];
    printf("what is your name? \n");
    scanf("%[^\n]%*c", name);
    printf("welcome %s\n", name);
  
  char answer2[200]; 
  printf("why do you want to learn c programming? \n");
    scanf("%[^\n]%*c",answer2 );
    printf("thank you for your answer %s\n",answer2 );

    char answer3[200];
    printf("As an aspiring developer, what inspired you to pursue programming?\n");
    scanf("%[^\n]%*c", answer3);
    printf("Nice answer keep it up %s\n", answer3);

    char answer4[200];
    printf("If you could create any software or application, what would it be and why?\n");
    scanf("%[^\n]%*c", answer4);
    printf("Great answer %s\n", answer4);
     
     char answer5[200];
    printf("As you embark on your programming journey, what positive impact do you hope to make in the tech community or beyond?\n");
    scanf("%[^\n]%*c", answer5);
    printf("Good  answer %s\n", answer5);

    

    return 0;

    

}

/*
Day1 Scores:
1. Successfully Submitted: 5/5

2. Correctness of the Code: 5/5

3. Coding Standards Adherence: 5/5

Total Score: 15/15
*/
