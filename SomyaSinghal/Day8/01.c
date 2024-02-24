#include <stdio.h>
float average(int n, int scores[])
{
    int total = 0;
    for (int i = 0; i < n; i++) 
    total = total + scores[i];
    return (float) total / n;
}
int sixes(int n, int scores[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    if (scores[i] == 6)
    count++;
    return count;
}
int fours(int n, int scores[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    if (scores[i] == 4)
    count++;
    return count;
}
float economy(int n, int runs)
{
    return (float) runs / n;
}
float strike_rate(int n, int runs, int balls)
{
    return (float) runs / balls * 100;
}
int main()
{
    int n;
    printf("Enter the number of balls: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter the scores on %d balls: ", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &scores[i]);
    
    int runs = 0, balls = 0;
    for (int i = 0; i < n; i++)
    {
        runs = runs + scores[i];
        if (scores [i] > 0)
        balls++;
    }

    printf("Average Score: %f\n", average(n, scores));
    printf("Sixes Scored: %d\n", sixes(n, scores));
    printf("Fours Scored: %d\n", fours(n, scores));
    printf("Economy Rate: %f\n", economy(n, runs));
    printf("Strike Rate: %f\n", strike_rate(n, runs, balls));

    return 0;
}