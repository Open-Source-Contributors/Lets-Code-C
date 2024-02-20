#include <stdio.h>

// Function to check if a number is a perfect number 
int perfect(int num){
    int sum = 0;
    for (int i = 1; i <num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    return sum == num;
}
int main(){
    int num;
    // user input
    printf("enter a positive integer:");
    scanf(%d, &num);
    // check if the number is perfect
    if ( num <= 0){
        printf(" enter a positive integer .\n");
    }
    else{
        if(perfect(num)){
            printf("%d a perfect number .\n", num);
        }
        else {
            printf("%d is not a perfect number .\n", num);
        }
    }
    return 0;
}