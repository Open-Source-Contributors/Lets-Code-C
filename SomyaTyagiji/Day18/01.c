#include<stdio.h>
#include <stdlib.h>

// Allocated list

// {
//     for(int i = 0; i < size ; i ++)

// }
// populate_list function 

void populate_list(int* list, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &list[i]);
    }
}
// display list
void display_list(int*list,int size){
    for(int i = 0; i < size; i++){
        printf("display the list of the element %d:",i+1);
        scanf("%d",&list[1]);
    }
    printf("\n");
}
// calculate sum
void calculate_sum(int*list , int size){
    int sum = 0;
for(int i = 0; i < size; i++){ 
    sum += list[i];
   }
return sum;
}
// dellocation
void dellocate_list(int*list){
    free(list);
}
int main(){

   int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    
    populate_list(list, size);
    display_list(list, size);

    int sum = calculate_sum(list, size);
    printf("The sum of the elements is: %d\n", sum);

    deallocate_list(list);

    return 0;
}

    





    