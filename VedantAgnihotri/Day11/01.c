#include <stdio.h>

int main() {
    FILE *file;

    // Create and open the file
    file = fopen("harry_potter.txt", "w");
    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    // Writing the first paragraph
    char *first_paragraph = "As Harry Potter nervously approached the front of the Great Hall during the Sorting Hat ceremony, he couldn't help but feel a mix of anticipation and anxiety. The entire school waited in silence as the magical hat was placed upon his head. In that moment, the Sorting Hat delved into the depths of Harry's mind, considering his qualities and potential destinies. The Hat's voice echoed through the hall, 'Difficult, very difficult... where to put you? Ah, I see bravery, courage, and a thirst to prove yourself. Better be GRYFFINDOR!' The cheers erupted, and Harry felt a sense of belonging as he joined the table of the brave and courageous Gryffindor students.\n";
    fputs(first_paragraph, file);

    // Printing the first paragraph
    printf("%s\n", first_paragraph);

    // Writing the second paragraph
    char *second_paragraph = "As Harry settled into his newfound home at Gryffindor, he formed lifelong friendships and faced countless adventures. The Sorting Hat's decision marked the beginning of a remarkable journey, where Harry discovered the true meaning of loyalty, bravery, and the strength that comes from the bonds of friendship. Little did he know that this choice would lead him to face the challenges that awaited him in the magical world and shape the destiny of the wizarding realm.\n";
    fputs(second_paragraph, file);

    // Printing the second paragraph
    printf("%s\n", second_paragraph);

    // Closing the file after writing
    fclose(file);

    return 0;
}

