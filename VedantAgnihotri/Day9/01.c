#include <stdio.h>
#include <string.h>

struct Station {
    int stationID;
    char stationname[50];
    char arrivaltime[10];
};

// decleration of function prototypes hadbeen applied here
void createtimetable(struct Station timetable[]);
void displaytimetable(struct Station timetable[]);
void searchbyID(struct Station timetable[], int id);
void updatearrivaltime(struct Station timetable[], int id, char newtime[]);

int main() {
    struct Station timetable[7]; 

    // Creating timetable of train
    createtimetable(timetable);

    // Displaying the timetable
    printf("Timetable for Train :\n");
    displaytimetable(timetable);

    // Search by ID
    int decleareID; 
    printf("\nPlease enter the unique ID of the station you are searching for:\n");
    scanf("%d", &decleareID);
    searchbyID(timetable, decleareID);

    // Update the arrival time of thomas the tank engine
    int updateID;
    char newtime[20]; 
    printf("\nPlease enter the unique ID of the station you want to update the arrival time for:\n");
    scanf("%d", &updateID);
    printf("\nPlease enter the new arrival time:\n");
    scanf("%s", newtime);
    printf("\nUpdate Time of Arrival for station with it's unique train ID %d to %s:\n", updateID, newtime);
    updatearrivaltime(timetable, updateID, newtime);

    // Display updated timetable
    printf("\nUpdated Train Timetable:\n");
    displaytimetable(timetable);

    return 0;
}

// Function to create the train timetable is defined here
void createtimetable(struct Station timetable[])
 {
    struct Station stations[7] =
     {
        {001, "Tidmouth Sheds", "08:00 AM"},
        {002, "Knapford", "08:30 AM"},
        {003, "Ffarquhar", "09:15 AM"},
        {004, "Wellsworth", "10:00 AM"},
        {005, "Brendam Docks", "11:30 AM"},
        {006, "Vicarstown", "01:00 PM"},
        {007, "Steamworks", "03:00 PM"}
    };

    memmove(timetable, stations, sizeof(stations));
}

// Function to display the entire time table
void displaytimetable(struct Station timetable[]) {
    for (int i = 0; i < 7; i++)
     {
        printf("Station ID: %03d | Name: %16s | Arrival Time: %s\n", timetable[i].stationID, timetable[i].stationname, timetable[i].arrivaltime);
    }
}

// Function to search for a station by it's ID
void searchbyID(struct Station timetable[], int id) {
    for (int i = 0; i < 7; i++)
     {
        if (timetable[i].stationID == id)
         {
            printf("Station found:\n");
            printf("Station ID: %03d | Name: %16s | Arrival Time: %s\n", timetable[i].stationID, timetable[i].stationname, timetable[i].arrivaltime);
            return;
        }
    }
}

// Function to update the arrival time of a specific station
void updatearrivaltime(struct Station timetable[], int id, char newtime[]) {
    for (int i = 0; i < 7; i++) {
        if (timetable[i].stationID == id)
         {

            strcpy(timetable[i].arrivaltime, newtime);
            printf("The arrivaltime of train had upated sucessfully, sorry for the inconvenience caused.\n");
            return;
        }
    }
}
