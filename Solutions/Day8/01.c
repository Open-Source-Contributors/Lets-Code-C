#include <stdio.h>

int average(int scores[], int size) {
    int sum = 0;

    int i; 
    for (i = 0; i < size; i++) {
        sum += scores[i];
    }

    float average = (float) sum / size;
    printf("Average: %f\n",average);

    return 0;
}

int sixes(int scores[], int size) {
    int sixes = 0;

    int i;
    for (i = 0; i < size; i++) {
        if (scores[i] == 6) {
            sixes++;
        }
    }

    printf("Sixes: %d\n",sixes);

    return 0;
}

int fours(int scores[], int size) {
    int fours = 0;

    int i;
    for (i = 0; i < size; i++) {
        if (scores[i] == 4) {
            fours++;
        }
    }

    printf("Fours: %d\n",fours);

    return 0;
}

int economy(int scores[], int size) {
    int sum = 0;

    int i; 
    for (i = 0; i < size; i++) {
        sum += scores[i];
    }

    int overs = size / 6;

    if (overs == 0) {
        printf("Insufficient number of bowls.");
    } else {
        float economy = (float) sum / overs;
        printf("Economy: %f\n",economy);
    }

    return 0;
}

int strike_rate(int scores[], int size) {
    int sum = 0;

    int i; 
    for (i = 0; i < size; i++) {
        sum += scores[i];
    }

    float strike_rate = (float) ((sum / size) * 100);
    printf("Strike rate: %f\n",strike_rate);

}

int main() {
    int n;
    printf("Enter the no of balls: ");
    scanf("%d",&n);

    int scores[n];

    int i;
    for (i=0; i<n; i++) {
        printf("Enter score of %d ball: ",i+1);
        scanf("%d",&scores[i]);

        if (scores[i] > 6 || scores[i] < 0) {
            printf("Invalid Score.");
            return 1;
        }
    }

    int size = sizeof(scores) / sizeof(scores[0]);

    average(scores, size);

    sixes(scores, size);

    fours(scores, size);

    economy(scores, size);

    strike_rate(scores, size);

    return 0;
}
