#include <stdio.h>

int main() {
    int input;

    while (1){
    printf(" Who entered the room? (1 for Nobita's mom, 2 for Nobita, 3 for others)\n");
    scanf("%d", &input);

    switch (input) {

    case 1:
     printf("Nobita's mother enters, Pausing Dora Cake baking!\n");
    break;

     case 2:
     printf("Nobita enters, Continuing Dora Cake baking!\n ");
    break;

     case 3:
     printf("Others enter, Stopping Dora Cake baking!\n");
    break;

    default:
    printf("invalid input, enter a valid option\n");
    continue;
    }
    // if Nobita's mother or others enters //
    break;

    }
    return 0;
}