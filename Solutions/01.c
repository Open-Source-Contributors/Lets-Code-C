#include <stdio.h>
#include <string.h>

int main() {
    // create a file in write mode
    FILE *write_file1 = fopen("harry_potter.txt", "w");

    // check file is successfully created and opened
    if (write_file1 == NULL) {
        printf("Unable to create file.\n");
        return 1; // give error
    }

    // write para1
    char *write_para1 = "As Harry Potter nervously approached the front of the Great Hall during the Sorting Hat ceremony, he couldn't help but feel a mix of anticipation and anxiety. The entire school waited in silence as the magical hat was placed upon his head. In that moment, the Sorting Hat delved into the depths of Harry's mind, considering his qualities and potential destinies. The Hat's voice echoed through the hall, 'Difficult, very difficult... where to put you? Ah, I see bravery, courage, and a thirst to prove yourself. Better be GRYFFINDOR!' The cheers erupted, and Harry felt a sense of belonging as he joined the table of the brave and courageous Gryffindor students.";
    fprintf(write_file1,"%s",write_para1);

    int size = strlen(write_para1);

    // close the file
    fclose(write_file1);

    // open file in read mode
    FILE *read_file1 = fopen("harry_potter.txt", "r");

    // check if file in not empty and print para 1
    if (read_file1 != NULL) {
        char read_para1[1000];
        fscanf(read_file1, " %[^\0]", read_para1);
        printf("%s",read_para1);
    }

    // close the file
    fclose(read_file1);

    // open the file again in append mode
    FILE *write_file2 = fopen("harry_potter.txt", "a");

    // set pointer to end of para 1
    fseek(write_file2, 0, SEEK_END);

    // write para 2
    char *para2 = "As Harry settled into his newfound home at Gryffindor, he formed lifelong friendships and faced countless adventures. The Sorting Hat's decision marked the beginning of a remarkable journey, where Harry discovered the true meaning of loyalty, bravery, and the strength that comes from the bonds of friendship. Little did he know that this choice would lead him to face the challenges that awaited him in the magical world and shape the destiny of the wizarding realm.";
    fprintf(write_file2, "%s", para2);

    // close the file
    fclose(write_file2);

    // open the file again in read mode
    FILE *read_file2 = fopen("harry_potter.txt", "r");

    // set pointer at end of para 1
    fseek(read_file2, size, SEEK_SET);

    // read and print para 2
    if (read_file2 != NULL) {
        char read_para2[1000];
        fscanf(read_file2, " %[^\0]", read_para2);
        printf("%s",read_para2);
    }

    // close the file
    fclose(read_file2);

    return 0;
}
