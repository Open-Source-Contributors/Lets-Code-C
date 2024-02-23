#include <stdio.h>

// Function to calculate average
double average(int scores[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (double)sum / n;
}

// Function to count sixes
int sixes(int scores[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(scores[i] == 6) {
            count++;
        }
    }
    return count;
}

// Function to count fours
int fours(int scores[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(scores[i] == 4) {
            count++;
        }
    }
    return count;
}

// Function to calculate economy rate
double economy(int scores[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (double)sum / n;
}

// Function to calculate strike rate
double strike_rate(int scores[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(scores[i] > 0) {
            count++;
        }
    }
    return (double)count / n * 100;
}

int main() {
    int n;
    printf("Enter the number of balls: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter the scores: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    printf("Average score: %.2f\n", average(scores, n));
    printf("Number of sixes: %d\n", sixes(scores, n));
    printf("Number of fours: %d\n", fours(scores, n));
    printf("Economy rate: %.2f\n", economy(scores, n));
    printf("Strike rate: %.2f\n", strike_rate(scores, n));

    return 0;
}
