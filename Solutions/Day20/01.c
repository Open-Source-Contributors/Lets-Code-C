#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define structure
struct Karamchari {
    int karamchari_id;
    char name[50];
    float vetan;
};

int main() {
    // allocate memory
    struct Karamchari *karamchari_ptr;
    karamchari_ptr = (struct Karamchari *) malloc (1 * sizeof(struct Karamchari));

    // user input
    printf("Enter information for the single employee:\n");
    int id;
    printf("Karamchari ID: ");
    scanf("%d",&id);
    karamchari_ptr->karamchari_id = id;
    char name[50];
    printf("Naam: ");
    scanf(" %[^\n]",name);
    strcpy(karamchari_ptr->name, name);
    float vetan;
    printf("Vetan: ");
    scanf("%f",&vetan);
    karamchari_ptr->vetan = vetan;
    printf("\n");

    // display employee information
    printf("Employee Information:\n");
    printf("Karamchari ID: %d\n", karamchari_ptr->karamchari_id);
    printf("Naam: %s\n", karamchari_ptr->name);
    printf("Vetan: %.2f\n", karamchari_ptr->vetan);
    printf("\n");

    // array of employees
    struct Karamchari staff[5];
    struct Karamchari (*staff_ptr) = (struct Karamchari *) malloc (5 * sizeof(struct Karamchari));

    // user input for array
    printf("Enter the information for the staff:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &(staff_ptr + i)->karamchari_id);
        printf("Naam: ");
        scanf(" %[^\n]", (staff_ptr + i)->name);
        printf("Vetan: ");
        scanf("%f", &(staff_ptr + i)->vetan);
        printf("\n");
    }

    // display array information
    printf("Staff Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", (staff_ptr + i)->karamchari_id);
        printf("Naam: %s\n", (staff_ptr + i)->name);
        printf("Vetan: %.2f\n", (staff_ptr + i)->vetan);
        printf("\n");
    }

    // deallocate memory
    free(karamchari_ptr);
    free(staff_ptr);

    return 0;
}
