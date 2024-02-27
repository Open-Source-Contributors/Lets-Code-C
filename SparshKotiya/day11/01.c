#include<stdio.h>
int main ()
{
   FILE *ptr  ;
    char ch[20];

// creating file as well as opening in writing formate

    ptr = fopen("harry_potter.txt","w");
     
// checking if file is not present return 1 (error)

      if (ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

// writing the content
    
    fprintf(ptr, "%s"," SPARSH");
    
// talking the pointer at the end

    fseek(ptr, 0, SEEK_END);

    fprintf(ptr,"%s","As Harry settled into his newfound home at Gryffindor, he formed lifelong friendships and faced countless adventures. The Sorting Hat's decision marked the beginning of a remarkable journey, where Harry discovered the true meaning of loyalty, bravery, and the strength that comes from the bonds of friendship. Little did he know that this choice would lead him to face the challenges that awaited him in the magical world and shape the destiny of the wizarding realm.");
    
    fclose(ptr);

    return 0;
}