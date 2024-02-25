#include <stdio.h>
#include <string.h>

struct Station {
    int stationID;
    char stationName[50];
    char arrivalTime[10];
};

void createTimetable(struct Station timetable[]);
void displayTimetable(struct Station timetable[]);
void searchByID(struct Station timetable[], int id);
void updateArrivalTime(struct Station timetable[], int id, char newTime[]);

int main() {
    struct Station thomasTimetable[7]; // Declare array for timetable
    
    // Create timetable
    createTimetable(thomasTimetable);
    
    // Display timetable
    printf("Thomas's Timetable:\n");
    displayTimetable(thomasTimetable);
    
    int searchID = 003;
    printf("\nSearching for station with ID %d:\n", searchID);
    search By ID(thomasTimetable, searchID);
    
    // Update arrival time for a specific station
    int updateID = 005;
    char newTime[] = "11:45 AM";
    printf("\nUpdating arrival time for station %d to %s:\n", updateID, newTime);
    updateArrivalTime(thomasTimetable, updateID, newTime);
    
    // Display updated timetable
    printf("\nUpdated Timetable:\n");
    
    return 0;
}

// Function to create timetable
void createTimetable(struct Station timetable[]) {
    struct Station sampleTimetable[7] = {
        {001, "Tidmouth Sheds", "08:00 AM"},
        {002, "Knapford", "08:30 AM"},
        {003, "Ffarquhar", "09:15 AM"},
        {004, "Wellsworth", "10:00 AM"},
        {005, "Brendam Docks", "11:30 AM"},
        {006, "Vicarstown", "01:00 PM"},
        {007, "Steamworks", "03:00 PM"}
    };
    memcpy(timetable, sampleTimetable, sizeof(sampleTimetable));
}

    for (int i = 0; i < 7; i++) {
        printf("| %010d | %-20s | %-12s |\n", timetable[i].stationID, timetable[i].stationName, timetable[i].arrivalTime);
    }

void search By ID(struct Station timetable[], int id) {
    int found = 0;
    for (int i = 0; i < 7; i++) {
        if (timetable[i].stationID == id) {
            printf("Station found:\n");
            printf("Station ID: %d\nStation Name: %s\nArrival Time: %s\n", timetable[i].stationID, timetable[i].stationName, timetable[i].arrivalTime);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Station with ID %d is not on the route.\n", id);
    }
}
void updateArrivalTime(struct Station timetable[], int id, char newTime[]) {
    for (int i = 0; i < 7; i++) {
        if (timetable[i].stationID == id) {
            strcpy(timetable[i].arrivalTime, newTime);
            printf("Arrival time updated successfully.\n");
            break;
        }
    }
}