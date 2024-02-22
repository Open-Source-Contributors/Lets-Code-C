#include <stdio.h>

int main() {
    double num, sum = 0.0;
    
    // Continuously prompt for input until zero is entered
    while(1) {
        printf("Enter a number (0 to exit): ");
        scanf("%lf", &num);
        
        if(num == 0.0)
            break;
        
        // Add the entered number to the sum
        sum += num;
    }
    
    // Display the final sum
    printf("The sum is: %.2lf\n", sum);
    
    return 0;
}