#include <stdio.h>

float average(int scores[], int n);
int sixes(int scores[], int n);
int fours(int scores[], int n);
float economy(int scores[], int n);
float strike_rate(int scores[], int n);

int main() {
    int n;
    printf("Enter the number of balls: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter the scores on each ball:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Calling functions and displaying output
    printf("Average score: %.2f\n", average(scores, n));
    printf("Number of sixes: %d\n", sixes(scores, n));
    printf("Number of fours: %d\n", fours(scores, n));
    printf("Economy rate: %.2f\n", economy(scores, n));
    printf("Strike rate: %.2f\n", strike_rate(scores, n));

    return 0;
}

// Function to calculate average score
float average(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (float)sum / n;
}

// Function to count number of sixes
int sixes(int scores[], int n) {
    int six_count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] == 6) {
            six_count++;
        }
    }
    return six_count;
}

// Function to count number of fours
int fours(int scores[], int n) {
    int four_count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] == 4) {
            four_count++;
        }
    }
    return four_count;
}

// Function to calculate economy rate
float economy(int scores[], int n) {
    int total_runs = 0;
    int total_balls = n;
    for (int i = 0; i < n; i++) {
        total_runs += scores[i];
    }
    return ((float)total_runs / total_balls) * 6; // Overs are calculated as 6 balls per over
}

// Function to calculate strike rate
float strike_rate(int scores[], int n) {
    int total_runs = 0;
    int total_balls = n;
    for (int i = 0; i < n; i++) {
        total_runs += scores[i];
    }
    return ((float)total_runs / total_balls) * 100; // Strike rate is calculated per 100 balls
}