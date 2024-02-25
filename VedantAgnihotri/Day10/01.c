#include <stdio.h>
#include <string.h>

// Define the FavoriteDish with the help of union
union Favorite_Dish {
    int biryani_served;
    int dosa_count;
    int bhature_count;
    float paneer_grm;
    

    
};

// Define the DishType with the help of union
union Dish_Type {
    int Biryani;
    int Dosa;
    int Chole_Bhature;
    float Matar_Paneer;
};

// Defining the friend and details with the help of structure
struct Friend {
    char name[50];
    union Dish_Type dish_type;
    union Favorite_Dish favoriteDish;
};

// Function to input each friend's favorite dish details
void input_preferences(struct Friend *f) {
    printf("Enter friend's name: ");
    scanf("%s", f->name);

    printf("Enter dish type (0 for Biryani, 1 for Dosa, 2 for Chole Bhature, 3 for Matar Paneer): ");
    scanf("%d", &(f->dish_type));

    if (f->dish_type.Biryani == 0) 
    {
        printf("Enter number of Biryani servings: ");
        scanf("%d", &(f->favoriteDish.biryani_served));
    } 
    else if (f->dish_type.Dosa == 1)
    {
        printf("Enter number of Dosas: ");
        scanf("%d", &(f->favoriteDish.dosa_count));
    } 
    else if (f->dish_type.Chole_Bhature == 2) 
    {
        printf("Enter number of Bhaturas: ");
        scanf("%d", &(f->favoriteDish.bhature_count));
    } 
    else if (f->dish_type.Matar_Paneer == 3)
    {
        printf("Enter amount of Paneer in grams: ");
        scanf("%f", &(f->favoriteDish.paneer_grm));
    }
}

// Function to show each friend's name and their favorite dish details
void display_information(struct Friend *f) 
{
    printf("Friend's name: %s\n", f->name);

    if (f->dish_type.Biryani == 0) 
    {
        printf("Favorite dish: Biryani, Number of servings: %d\n", f->favoriteDish.biryani_served);
    } 
    else if (f->dish_type.Dosa == 1)
    {
        printf("Favorite dish: Dosa, Number of Dosas: %d\n", f->favoriteDish.dosa_count);
    }
     else if (f->dish_type.Chole_Bhature == 2)
    {
        printf("Favorite dish: Chole Bhature, Number of Bhaturas: %d\n", f->favoriteDish.bhature_count);
    } 
    else if (f->dish_type.Matar_Paneer == 3)
    {

     printf("Favorite dish: Matar Paneer, Amount of Paneer in grams: %f\n", f->favoriteDish.paneer_grm);
    }

}


    
int main() {
    struct Friend friends[4];
    for (int i = 0; i < 4; i++) {
        input_preferences(&friends[i]);
    }

    for (int i = 0; i < 4; i++) {
        display_information(&friends[i]);
    }

    return 0;
}

   