#include <stdio.h>

int main() {
    int input;

    while (1) {
        // Ask the user to input who entered the room
        printf("Who entered the room? (1 for Nobita's mom, 2 for Nobita, 3 for others): ");
        scanf("%d", &input);

        // Use switch statement to handle different cases based on input
        switch (input) {
            case 1:
                // If Nobita's mom enters, pause baking
                printf("Nobita's mom is here. Pausing Dora Cake baking!\n");
                break;
            case 2:
                // If Nobita enters, continue baking
                printf("Nobita is here. Continuing Dora Cake baking!\n");
                continue; // Continue baking without breaking out of the loop
            case 3:
                // If others enter, stop baking
                printf("Someone else is here. Stopping Dora Cake baking!\n");
                break;
            default:
                // Handle invalid input
                printf("Invalid input! Please enter a valid option.\n");
                continue; // Continue prompting for input without breaking out of the loop
        }

        // If Nobita's mom or others enter, break out of the loop
        break;
    }

    return 0;
}