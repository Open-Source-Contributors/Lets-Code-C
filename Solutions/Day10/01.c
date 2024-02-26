#include <stdio.h>
#include <string.h>

// Define the union FavoriteDish
union FavoriteDish {
    int biryani_servings;
    int dosa_quantity;
    int chole_bhature_servings;
    float matar_paneer_grams;
};

// Define the structure Friend
struct Friend {
    char name[50];
    char favorite_dish_name[50];
    union FavoriteDish favorite_dish;
};

// Function to input each friend's favorite dish details
void input_preferences(struct Friend *friend) {
    printf("Enter the name of friend: ");
    scanf(" %[^\n]", (*friend).name);

    printf("Enter favorite dish name (biryani, dosa, chole bhature, matar paneer): ");
    scanf(" %[^\n]", (*friend).favorite_dish_name);

    // Match the favorite dish
    if (strcmp((*friend).favorite_dish_name, "biryani") == 0) {
        printf("%s's favorite dish is %s.\n", (*friend).name, (*friend).favorite_dish_name);
        printf("Enter the number of servings of biryani: ");
        scanf("%d", &(*friend).favorite_dish.biryani_servings);
    } else if (strcmp((*friend).favorite_dish_name, "dosa") == 0) {
        printf("%s's favorite dish is %s.\n", (*friend).name, (*friend).favorite_dish_name);
        printf("Enter the number of dosas: ");
        scanf("%d", &(*friend).favorite_dish.dosa_quantity);
    } else if (strcmp((*friend).favorite_dish_name, "chole bhature") == 0) {
        printf("%s's favorite dish is %s.\n", (*friend).name, (*friend).favorite_dish_name);
        printf("Enter the number of servings of bhaturas: ");
        scanf("%d", &(*friend).favorite_dish.chole_bhature_servings);
    } else if (strcmp((*friend).favorite_dish_name, "matar paneer") == 0) {
        printf("%s's favorite dish is %s.\n", (*friend).name, (*friend).favorite_dish_name);
        printf("Enter the amount of servings of matar paneer in grams: ");
        scanf("%f", &(*friend).favorite_dish.matar_paneer_grams);
    } else {
        printf("No such dish.\n");
    }
}

// Function to display each friend's name and their favorite dish details
void display_information(struct Friend friend) {
    printf("Name: %s.\n", friend.name);
    printf("Favorite dish: %s\n", friend.favorite_dish_name);

    // Display specifics of favorite dish
    if (strcmp(friend.favorite_dish_name, "biryani") == 0) {
        printf("Servings: %d\n", friend.favorite_dish.biryani_servings);
    } else if (strcmp(friend.favorite_dish_name, "dosa") == 0) {
        printf("Quantity: %d\n", friend.favorite_dish.dosa_quantity);
    } else if (strcmp(friend.favorite_dish_name, "chole bhature") == 0) {
        printf("Servings: %d\n", friend.favorite_dish.chole_bhature_servings);
    } else if (strcmp(friend.favorite_dish_name, "matar paneer") == 0) {
        printf("Grams: %f\n", friend.favorite_dish.matar_paneer_grams);
    } else {
        printf("No such dish.\n");
    }
}

int main() {
    // Create structures for each friend
    struct Friend friend1, friend2, friend3, friend4;

    // Input preferences for each friend
    input_preferences(&friend1);
    input_preferences(&friend2);
    input_preferences(&friend3);
    input_preferences(&friend4);

    // Display information for each friend
    display_information(friend1);
    display_information(friend2);
    display_information(friend3);
    display_information(friend4);

    return 0;
}
