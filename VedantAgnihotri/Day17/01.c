#include <stdio.h>
// Constants for hotel dimensions
#define BUILDINGS 3
#define FLOORS 10
#define ROOMS 20

// Function prototypes
void initialize_hotel(int hotel[BUILDINGS][FLOORS][ROOMS]);
void display_room_status(int hotel[BUILDINGS][FLOORS][ROOMS], char building, int floor, int room);
void update_number_of_guests(int hotel[BUILDINGS][FLOORS][ROOMS], char building, int floor, int room, int guests);

int main() {
    // Initialize hotel data
    int hotel[BUILDINGS][FLOORS][ROOMS];
    initialize_hotel(hotel);

    // Display room status 
    display_room_status(hotel, 'A', 1, 1);

    // Update number of guests 
    update_number_of_guests(hotel, 'B', 5, 10, 3);
    display_room_status(hotel, 'B', 5, 10);

    return 0;
}

// Initialize hotel data
void initialize_hotel(int hotel[BUILDINGS][FLOORS][ROOMS]) {
    // Initialize all rooms as empty
    for (int i = 0; i < BUILDINGS; i++) {
        for (int j = 0; j < FLOORS; j++) {
            for (int k = 0; k < ROOMS; k++) {
                hotel[i][j][k] = 0; 
            }
        }
    }

    
    // Rooms in A, floor 1 to 3, are marked as occupied with 1 guest
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < ROOMS; k++) {
            hotel[0][j][k] = 1;
        }
    }

    // Rooms in  B, floor 4 to 6, are empty
    for (int j = 3; j < 6; j++) {
        for (int k = 0; k < ROOMS; k++) {
            hotel[1][j][k] = 0;
        }
    }

    // Rooms in b C, floor 7 to 10, are alternately occupied
    for (int j = 6; j < FLOORS; j++) {
        for (int k = 0; k < ROOMS; k++) {
            if ((j - 6) % 2 == 0) {
                hotel[2][j][k] = 1;
            } else {
                hotel[2][j][k] = 0;
            }
        }
    }
}

// Display the status 
void display_room_status(int hotel[BUILDINGS][FLOORS][ROOMS], char building, int floor, int room) {
    int bIndex = building - 'A';
    int fIndex = floor - 1;
    int rIndex = room - 1;

    if (bIndex >= 0 && bIndex < BUILDINGS && fIndex >= 0 && fIndex < FLOORS && rIndex >= 0 && rIndex < ROOMS) {
        if (hotel[bIndex][fIndex][rIndex] == 0) {
            printf("Room %c%d-%d is empty.\n", building, floor, room);
        } else {
            printf("Room %c%d-%d is occupied.\n", building, floor, room);
        }
    } else {
        printf("Invalid room.\n");
    }
}

// Update the number of guests 
void update_number_of_guests(int hotel[BUILDINGS][FLOORS][ROOMS], char building, int floor, int room, int guests) {
    int bIndex = building - 'A';
    int fIndex = floor - 1;
    int rIndex = room - 1;

    if (bIndex >= 0 && bIndex < BUILDINGS && fIndex >= 0 && fIndex < FLOORS && rIndex >= 0 && rIndex < ROOMS) {
        hotel[bIndex][fIndex][rIndex] = guests;
    } else {
        printf("Invalid room.\n");
    }
}
