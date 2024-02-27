#include <stdio.h>

union favorite_dishes_details {
    int Servings;
    int Dosa;
    int Chole_Bhaturas;
    float Matar_Paneer;
};

struct friend{
    char name[30];
    char dish_name[40];
    union favorite_dishes_details dish_details;
};
void Input_Preference (struct friend friends[4]);
void Display_Information(struct friend friends[4]);
int main() {
    struct friend friends[4];

    // Input preferences for each friend
    Input_Preference(friends);

    // Display information for each friend
    Display_Information(friends);

    return 0;
}
void Input_Preference(struct friend friends[4]) {
    int i;

    for (i = 0; i < 4; i++) {
        printf("Enter friend's name: ");
        scanf("%s", friends[i].name);

        printf("Enter the type of dish they prefer (Biryani, Dosa, Chole-Bhature, Matar Paneer): ");
        scanf("%s", friends[i].dish_name);

        if (strcmp(friends[i].dish_name, "Biryani") == 0) {
            printf("Enter the no. of Biryani: ");
            scanf("%d", &friends[i].dish_details.Servings);
        } else if (strcmp(friends[i].dish_name, "Dosa") == 0) {
            printf("Enter the no. of Dosa: ");
            scanf("%d", &friends[i].dish_details.Dosa);
        } else if (strcmp(friends[i].dish_name, "Chole_Bhature") == 0) {
            printf("Enter the no. of Chole-Bhature: ");
            scanf("%d", &friends[i].dish_details.Chole_Bhaturas);
        } else if (strcmp(friends[i].dish_name, "Matar_Paneer") == 0) {
            printf("Enter the no. of Matar Paneer: ");
            scanf("%f", &friends[i].dish_details.Matar_Paneer);
        } else {
            printf("Invalid dish\n");
        }
    }
}
void Display_Information(struct friend friends[4]) {
    int i;

    for (i = 0; i < 4; i++) {
        printf("Friend's name: %s\n", friends[i].name);
        printf("Favorite dish: %s\n", friends[i].dish_name);

        if (strcmp(friends[i].dish_name, "Biryani") == 0) {
            printf("Amount of Biryani: %d\n", friends[i].dish_details.Servings);
        } else if (strcmp(friends[i].dish_name, "Dosa") == 0) {
            printf("Amount of Dosa: %d\n", friends[i].dish_details.Dosa);
        } else if (strcmp(friends[i].dish_name, "Chole_Bhature") == 0) {
            printf("Amount of Chole-Bhature: %d\n", friends[i].dish_details.Chole_Bhaturas);
        } else if (strcmp(friends[i].dish_name, "Matar_Paneer") == 0) {
            printf("Amount of Matar Paneer: %.2f\n", friends[i].dish_details.Matar_Paneer);
        } else {
            printf("Invalid dish\n");
        }
    }
}