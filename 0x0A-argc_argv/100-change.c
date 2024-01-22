#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main -  program that prints the minimum number of coins to make change for an amount of money
* @argc: argument that counts argument input
* @argv: argument that stores the strings in an array of char* (strings)
* Return: 0
*/



void calculateChange(int cents) {
    if (cents < 0) {
        printf("0\n");
        return;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);

    int count = 0;
    for (int i = 0; i < numCoins; ++i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            count++;
        }
    }

    printf("%d\n", count);
}

int main(int argc, char *argv[]) {
    // Check the number of arguments
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Convert the argument to an integer
    int cents = atoi(argv[1]);

    // Calculate and print the minimum number of coins
    calculateChange(cents);

    return 0;
}
