#include <stdio.h>

int main() {
    int hotel[3][10][20];

    // for building A
    int j, k;
    for (j = 0; j < 10; j++) {
        for (k = 0; k < 20; k++) {
            if (j < 3) {
                hotel[0][j][k] = 1;
            } else {
                hotel[0][j][k] = 0;
            }
        }
    }

    // for building B
    for (j = 0; j < 10; j++) {
        for (k = 0; k < 20; k++) {
            if (j >= 3 && j <= 5) {
                hotel[1][j][k] = 0;
            } else {
                hotel[1][j][k] = 2;
            }
        }
    }

    // for building C
    for (j = 0; j < 10; j++) {
        for (k = 0; k < 20; k++) {
            if (j < 3) {
                hotel[2][j][k] = 0;
            } else if (j >= 3 && j <= 5) {
                hotel[2][j][k] = 2;
            } else {
                if (k % 2 != 0) {
                    hotel[2][j][k] = 1;
                } else {
                    hotel[2][j][k] = 0;
                }
            }
        }
    }

    // print the status of all rooms
    printf("Hotel room status:\n");
    for (int i = 0; i < 3; i++) {
        printf("Building %c:\n", 'A' + i);
        for (int j = 0; j < 10; j++) {
            printf("Floor %d: ", j + 1);
            for (int k = 0; k < 20; k++) {
                printf("%d ", hotel[i][j][k]);
            }
            printf("\n");
        }
    }

    // update guests number
    int building, floor, room, guests;
    do { 
        printf("Enter the corresponding building no (1 for A, 2 for B and 3 for C): ");
        scanf("%d",&building);
        printf("Enter the floor no: ");
        scanf("%d",&floor);
        printf("Enter the room no: ");
        scanf("%d",&room);
        printf("Enter the no of guests: ");
        scanf("%d",&guests);
    } while ((building < 1 || building > 3) || (floor < 1 || floor > 10) || (room < 1 || room > 20) || (guests < 0));
    hotel[building - 1][floor - 1][room - 1] = guests;

    // again print the status of all rooms
    printf("Hotel room status:\n");
    for (int i = 0; i < 3; i++) {
        printf("Building %c:\n", 'A' + i);
        for (int j = 0; j < 10; j++) {
            printf("Floor %d: ", j + 1);
            for (int k = 0; k < 20; k++) {
                printf("%d ", hotel[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
