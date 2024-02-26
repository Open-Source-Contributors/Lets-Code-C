#include <stdio.h>
#include <string.h>

typedef struct {
    int stationID;
    char stationName[50];
    char arrivalTime[10];
} Station;

Station timetable[] = {
    {1, "Tidmouth Sheds", "08:00 AM"},
    {2, "Knapford", "08:30 AM"},
    {3, "Ffarquhar", "09:15 AM"},
    {4, "Wellsworth", "10:00 AM"},
    {5, "Brendam Docks", "11:30 AM"},
    {6, "Vicarstown", "01:00 PM"},
    {7, "Steamworks", "03:00 PM"}
};

void displayTimetable() {
    for(int i = 0; i < sizeof(timetable)/sizeof(Station); i++) {
        printf("Station ID: %d, Station Name: %s, Arrival Time: %s\n", timetable[i].stationID, timetable[i].stationName, timetable[i].arrivalTime);
    }
}

void searchByID(int id) {
    for(int i = 0; i < sizeof(timetable)/sizeof(Station); i++) {
        if(timetable[i].stationID == id) {
            printf("Station ID: %d, Station Name: %s, Arrival Time: %s\n", timetable[i].stationID, timetable[i].stationName, timetable[i].arrivalTime);
            return;
        }
    }
    printf("Station not found\n");
}

void updateArrivalTime(int id, char* newTime) {
    for(int i = 0; i < sizeof(timetable)/sizeof(Station); i++) {
        if(timetable[i].stationID == id) {
            strcpy(timetable[i].arrivalTime, newTime);
            printf("Updated arrival time for Station ID: %d, New Arrival Time: %s\n", timetable[i].stationID, timetable[i].arrivalTime);
            return;
        }
    }
    printf("Station not found\n");
}

int main() {
    displayTimetable();
    searchByID(3);
    updateArrivalTime(4, "10:30 AM");
    displayTimetable();

    return 0;
}