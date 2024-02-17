#include<stdio.h>

int main()
{
    char name[50];
    printf("Hellow! What's your name?");
    scanf("%[^\n]%*c", name);
    printf("welcome,%s!\n", name);
    // Answer: MahakPal // 
    
    char solution2[200];
    //Problem second//
    printf("Why do you want to learn C?\n ");
    scanf("%[^\n]%*c", solution2);
    printf("nice, keep it up,%s\n", solution2);
     // Answer2: C is powerful and commonly used in system programming //

    char solution3[200];
    //Problem third//
    printf("As an inspiring developer, what inspired you to pursue programming?\n ");
    scanf("%[^\n]%*c", solution3);
    printf("best of your luck,%s\n", solution3);
    // Answer3: Reseach the carrier opportunities and goals //


    char solution4[200];
    // Problem forth //
    printf("If you could to create any software or application, what would it be and why?\n");
    scanf("%[^\n]%*c", solution4);
    printf("good keep success,%s\n", solution4);
    // Answer4: As I'm beginner so i haven't thought about it yet //


    char solution5[200];
    // Prolem fifth //
    printf("As you embark on your programming journey, what positive impact do you hope to make in the tech community or beyond?\n ");
    scanf("%[^\n]%*c", solution5);
    printf("good,keep it up,%s\n", solution5);
    // Answer5: Learn yourself then teach and mentor other //

    return 0;

}