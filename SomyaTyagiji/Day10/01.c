#include <stdio.h>
#include <string.h>

typedef union {
    int biryaniServings;
    int dosaCount;
    int bhaturaCount;
    float paneerAmount;
} FavoriteDish;

typedef struct {
    char name[50];
    char dishName[50];
    FavoriteDish dishDetails;
} Friend;

void inputPreferences(Friend* f) {
    printf("Enter friend's name: ");
    scanf("%s", f->name);
    printf("Enter favorite dish name: ");
    scanf("%s", f->dishName);
    if(strcmp(f->dishName, "Biryani") == 0) {
        printf("Enter number of Biryani servings: ");
        scanf("%d", &f->dishDetails.biryaniServings);
    } else if(strcmp(f->dishName, "Dosa") == 0) {
        printf("Enter number of Dosas: ");
        scanf("%d", &f->dishDetails.dosaCount);
    } else if(strcmp(f->dishName, "Chole Bhature") == 0) {
        printf("Enter number of Bhaturas: ");
        scanf("%d", &f->dishDetails.bhaturaCount);
    } else if(strcmp(f->dishName, "Matar Paneer") == 0) {
        printf("Enter amount of Paneer in grams: ");
        scanf("%f", &f->dishDetails.paneerAmount);
    }
}

void displayInformation(Friend* f) {
    printf("Friend's name: %s\n", f->name);
    printf("Favorite dish: %s\n", f->dishName);
    if(strcmp(f->dishName, "Biryani") == 0) {
        printf("Number of Biryani servings: %d\n", f->dishDetails.biryaniServings);
    } else if(strcmp(f->dishName, "Dosa") == 0) {
        printf("Number of Dosas: %d\n", f->dishDetails.dosaCount);
    } else if(strcmp(f->dishName, "Chole Bhature") == 0) {
        printf("Number of Bhaturas: %d\n", f->dishDetails.bhaturaCount);
    } else if(strcmp(f->dishName, "Matar Paneer") == 0) {
        printf("Amount of Paneer in grams: %.2f\n", f->dishDetails.paneerAmount);
    }
}

int main() {
    Friend friends[4];
    for(int i = 0; i < 4; i++) {
        inputPreferences(&friends[i]);
    }
    for(int i = 0; i < 4; i++) {
        displayInformation(&friends[i]);
    }

    return 0;
}