#include <stdio.h>

int shopping() {
    printf("Let's go for shopping.");

    int buy_black_purse;
    printf("Enter 0 if black purse is available and 1 if not available: ");
    scanf("%d",&buy_black_purse);

    if (buy_black_purse == 0) {
        printf("Buy Black Purse.\n");
    } else if (buy_black_purse == 1) {
        printf("Buy Pink Top.\n");
    } else {
        shopping();
    }

    return 0;
}
 
int popcorn() {
    printf("It's interval. It's time to buy snacks.");

    int have_popcorn;
    printf("Enter 0 if popcorn is available and 1 if not available: ");
    scanf("%d",&have_popcorn);

    if (have_popcorn == 0) {
        printf("Buy Popcorn\n");
    } else if (have_popcorn == 1) {
        printf("Buy Chips\n");
    } else {
        popcorn();
    }
    
    return 0;
}

int picnic() {
    printf("Let's go on picnic.");

    int ride_cycle;
    printf("Enter 0 if cycle is available and 1 if not available: ");
    scanf("%d",&ride_cycle);

    if (ride_cycle == 0) {
        printf("Go for cycleride");
    } else if (ride_cycle == 1) {
        printf("Go for walk.");
    } else {
        picnic();
    }

    return 0;
}

int mall() {
    int buy_ticket;
    printf("Enter 0 if ticket is available and 1 if not available: ");
    scanf("%d",&buy_ticket);

    if (buy_ticket ==  0) {
        popcorn();
    } else if (buy_ticket == 1) {
        shopping();
    } else {
        mall();
    }

    return 0;
}

int mother() {
    int fun_time;
    printf("Enter 0 if mother is at home and 1 if she is not at home: ");
    scanf("%d",&fun_time);

    if (fun_time == 0) {
        picnic();
    } else if (fun_time == 1) {
        mall();
    } else {
        mother();
    }
    
    return 0;
}

int father() {
    int study_time;
    printf("Enter 0 if father is at home and 1 if he is not at home: ");
    scanf("%d",&study_time);

    if (study_time == 0) {
        printf("Father is at home. It's time to study.");
    } else if (study_time == 1) {
        mother();
    } else {
        father();
    }

    return 0;
}
int main() {
    father();

    return 0;
}
