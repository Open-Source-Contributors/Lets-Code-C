#include <stdio.h>

int main()
{
    int x;

    while (1)
    {
        printf("Who entered the room? (1 for Nobita's mom, 2 for Nobita, 3 for others): ");
        scanf("%d", &x);

        switch (x)
        {
            case 1:
                printf("Nobita's mom is here. Pausing Dora Cake baking! ");
                break;
            case 2:
                printf("Nobita is here. Continuing Dora Cake baking!\n");
                continue;
            case 3:
                printf("Someone else is here. Stopping Dora Cake baking! ");
                break;
            default:
                printf("Enter valid number\n");
                continue;
        }
        break;
    }
}