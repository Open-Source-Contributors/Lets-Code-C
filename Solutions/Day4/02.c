#include <stdio.h>

int choice();

int baking();

int main() {

    baking();

    return 0;
   
}

int choice() {
    int option;
    do {
        printf("Enter 1 for Nobita's mom, 2 for Nobita and 3 for others: ");
        scanf("%d",&option);
    } while (option != 1 && option != 2 && option != 3);

    return option;
}

int baking() {
    int option = choice();

    switch(option) {
        case 1: printf("Nobita's mom is here. Pausing Dora Cake baking!\n"); break;
        case 2: printf("Nobita is here. Continuing Dora Cake baking!\n"); baking(); break;
        case 3: printf("Someone else is here. Stopping Dora Cake baking!\n"); break;
    }

    return 0;
}
