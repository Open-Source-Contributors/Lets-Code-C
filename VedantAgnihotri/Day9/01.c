#include <stdio.h>
#include <string.h>

struct Station {
    int stationID;
    char stationName[50];
    char arrivalTime[10];
};

// Function prototypes
void createTimetable(struct Station timetable[]);
void displayTimetable(struct Station timetable[]);
void searchByID(struct Station timetable[], int id);
void updateArrivalTime(struct Station timetable[], int id, char newTime[]);

int main() {
    struct Station timetable[7]; 

    // Creating  timetable
    createTimetable(timetable);

    // Display timetable
    printf("Train Timetable:\n");
    displayTimetable(timetable);

    // Search by ID
    int searchID = 004; 
    printf("\nSearching for station with ID %d:\n", searchID);
    searchByID(timetable, searchID);

    // Update the arrival time of thomas the tank engine
    int updateID = 005; 
    char newTime[] = "10:30 AM"; 
    printf("\nUpdating arrival time for station with ID %d to %s:\n", updateID, newTime);
    updateArrivalTime(timetable, updateID, newTime);

    // Display updated timetable
    printf("\nUpdated Train Timetable:\n");
    displayTimetable(timetable);

    return 0;
}

// Function to create the train timetable
void createTimetable(struct Station timetable[]) {
    struct Station stations[7] = {
        {001, "Tidmouth Sheds", "08:00 AM"},
        {002, "Knapford", "08:30 AM"},
        {003, "Ffarquhar", "09:15 AM"},
        {004, "Wellsworth", "10:00 AM"},
        {005, "Brendam Docks", "11:30 AM"},
        {006, "Vicarstown", "01:00 PM"},
        {007, "Steamworks", "03:00 PM"}
    };

    memcpy(timetable, stations, sizeof(stations));
}

// Function to display the entire time table
void displayTimetable(struct Station timetable[]) {
    for (int i = 0; i < 7; i++) {
        printf("Station ID: %03d | Name: %16s | Arrival Time: %s\n", timetable[i].stationID, timetable[i].stationName, timetable[i].arrivalTime);
    }
}

// Function to search for a station by it's ID
void searchByID(struct Station timetable[], int id) {
    for (int i = 0; i < 7; i++) {
        if (timetable[i].stationID == id) {
            printf("Station found:\n");
            printf("Station ID: %03d | Name: %16s | Arrival Time: %s\n", timetable[i].stationID, timetable[i].stationName, timetable[i].arrivalTime);
            return;
        }
    }
    
}

// Function to update the arrival time of a specific station
void updateArrivalTime(struct Station timetable[], int id, char newTime[]) {
    for (int i = 0; i < 7; i++) {
        if (timetable[i].stationID == id) {
            strcpy(timetable[i].arrivalTime, newTime);
            printf("The arrivaltime of train had upated sucessfully, sorry for the inconvenience caused.\n");
            return 0;
        }
    }
   
}

