#include <stdio.h>
#include <string.h>

struct Station {
    int stationID;
    char stationName[50];
    char arrivalTime[10];
};
void displayTimetable(struct Station timetable[], int size) {
    printf("Train Timetable\n");
    for (int i = 0; i < size; i++) {
    printf("%d\n %s\n %s\n",timetable[i].stationID,timetable[i].stationName, timetable[i].arrivalTime);
    }
    printf("\n");
}
int main() {

struct Station Thomastimetable[] = {
        {001, "Tidmouth Sheds", "08:00 AM"},
        {002, "Knapford", "08:30 AM"},
        {003, "Ffarquhar", "09:15 AM"},
        {004, "Wellsworth", "10:00 AM"},
        {005, "Brendam Docks", "11:30 AM"},
        {006, "Vicarstown", "01:00 PM"},
        {007, "Steamworks", "03:00 PM"},
    };
    return 0;
}

void Search_by_ID(struct Station timetable[], int size, int searchId) {
for (int i = 0; i < size; i++) {
    if (timetable[i].stationID == searchId) {
    printf("Station found\n");
    printf("%d\n %s\n %s\n",timetable[i].stationID,timetable[i].stationName, timetable[i].arrivalTime); 
    return;
    }
}
printf("station is not on the route\n", searchId);
}
void update_Arrival_time(struct Station timetable[], int searchId, int size, char new_time[]) {
    for (int i = 0; i < size; i++) {
    if (timetable[i].stationID == searchId)
    strcpy(timetable[i].arrivalTime, new_time);
    printf("Arrival time updated successfully\n");
    return;
     }
}