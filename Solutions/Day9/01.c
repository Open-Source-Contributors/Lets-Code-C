#include <stdio.h>
#include <string.h>

struct Station {
        int stationID;
        char stationName[50];
        char arrivalTime[10];
    };

int display_timetable(struct Station timetable[], int size) {
    int i;
    printf("%*s       %*s       %*s\n",16,"Station ID",16,"Station Name",16,"Arrival Time");
    for (i = 0; i < size; i++) {
        printf("%*d       %*s       %*s\n",16,timetable[i].stationID,16,timetable[i].stationName,16,timetable[i].arrivalTime);
    }

    return 0;
}

int search_station(struct Station timetable[], int size) {
    int id;
    printf("Enter Station ID: ");
    scanf("%d",&id);

    int i;
    for (i = 0; i < size; i++) {
        if (timetable[i].stationID == id) {
            printf("Station ID: %d\n",timetable[i].stationID);
            printf("Station Nmae: %s\n",timetable[i].stationName);
            printf("Arrival Time: %s\n",timetable[i].arrivalTime);
            return 0;
        }
    }

    return 1;
}

int update_arrival_time(int id, char time[], struct Station timetable[], int size);

int main() {

    struct Station timetable[7] = {{001, "Tidmouth Sheds", "08:00 AM"},
                                   {002, "Knapford", "08:20 AM"},
                                   {003, "Ffarquhar", "09:15 AM"},
                                   {004, "Wellsworth", "10:00 AM"},
                                   {005, "Brendam Docks", "11:30 AM"},
                                   {006, "Vicarstown", "01:00 PM"},
                                   {007, "Steamworks", "03:00 Pm"}};
    
    int size = sizeof(timetable) / sizeof(timetable[0]);

    //To display timetable

    display_timetable(timetable, size);

    int search = search_station(timetable, size);
    if (search) {
        printf("Station is not on the route.");
    }

    //To update arrival time of a specific station

    int id;
    printf("Enter the Station ID of station whose arrival time has to be updated: ");
    scanf("%d",&id);
    char time[10];
    printf("Enter new arrival time: ");
    scanf(" %9[^\n]",time);

    int update = update_arrival_time(id, time, timetable, size);
    if(update) {
        printf("Station is not on the route.\n");
    }

    //To display timetable after update

    display_timetable(timetable, size);

    return 0;
}

int update_arrival_time(int id, char time[], struct Station timetable[], int size) {
    int i;
    for (i = 0; i < size; i++ ) {
        if (timetable[i].stationID == id) {
            strcpy(timetable[i].arrivalTime, time);

            printf("New Arrival Time for Station Id %d is %s.\n",id,timetable[i].arrivalTime);
            return 0;
        }
    }
    
    return 1;
}
