#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;}


int main(){
    int number1, number2;
    do{
        printf("Enter the first non zero positive integer:\n");
        scanf("%d", &number1);
    }while(number1 == 0);

    if (number1 == 0){
        printf("%d is a zero positive integer, please enter a non zero positive integer:\n");
    }

    do {
        printf("Enter the second non zero positive integer:\n");
        scanf("%d", &number2);
    }while(number2 == 0);

    if(number2 == 0){
        printf("%d is a zero positive integer, please enter a non zero positive integer:\n");
    }

    swap(&number1, &number2);
    printf("origional numbers %d, %d\n", number1, number2);
    printf("swapped numbers %d, %d\n", number2, number1);
    
return 0;
}

    
