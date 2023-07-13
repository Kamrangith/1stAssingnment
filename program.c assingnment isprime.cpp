//kamran khan
// Serial no.14
//1st semister 
//(BSCS)
#include <stdio.h>

int isPrime(int number) {
    if (number <= 1)
        return 0;
    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }
    
    return 1;
}

int main() {
    int number;
    int tryAgain = 1;
    
    while (tryAgain == 1) {
        printf("Please enter a number between 2 and 100: ");
        scanf("%d", &number);
        
        if (number >= 2 && number <= 100) {
            int primeResult = isPrime(number);
            if (primeResult == 1) {
                printf("%d is a prime number.\n", number);
            } else {
                printf("%d is not a prime number.\n", number);
            }
            
            tryAgain = 0;
        } else {
            printf("Number out of range. Press 1 to try again.\n");
            scanf("%d", &tryAgain);
        }
    }
    
    return 0;
}

