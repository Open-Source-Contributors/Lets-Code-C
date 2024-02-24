// Veer is practicing cricket with his friend, and they need a program to record and analyze his scores.
//  Your task is to create a C program that takes the scores on n balls as input using a for loop and stores 
// them in an array. After recording the scores, implement five functions to perform the following tasks:

// average Function: Calculate the average score of Veer on n balls.

// sixes Function: Count the number of sixes scored by Veer in n balls.

// fours Function: Count the number of fours scored by Veer in n balls.

// economy Function: Calculate the economy rate of Veer throughout the session.

// strike_rate Function: Calculate Veer's strike rate on n balls.

// Then call all those functions in main and display output.


#include <stdio.h>

float average(int scores[], int n)  {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += scores[i];
     }
     return (float)sum / n;
    
}

int sixes(int scores[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if (scores[i] == 6) {
            count++;
        }
    }
    return count;
}
int fours(int scores[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if (scores[i] == 4) {
            count++;
        }
    }
    return count;
}
float economy(int runs,int balls) {
    return (int)runs / balls * 6;
}
float strike_rate(int runs, int balls){
    return (int)runs / balls * 100;
}
int main() {
    int n;
    printf("Enter the number of balls\n");
    scanf("%d", &n);

    int scores[n];
    printf("Enter the scores on n balls %d\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Ball %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

printf(" Average scores: %2f\n", average(scores, n));
printf("Number of sixes: %d\n", sixes(scores, n));
printf("Number of fours: %d\n", fours(scores, n));
int total_runs = average(scores, n) * n;
printf("Economy Rate: %2f\n", economy(total_runs, n));
printf("Strike Rate: %2f\n", strike_rate(total_runs, n));

 return 0;
}