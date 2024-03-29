// IDAH AMONDI OMONDI
// ENE212-0095/2021

#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d, ", next);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms for Fibonacci Series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! Please enter a positive number.\n");
    } else {
        generateFibonacci(n);
    }

    return 0;
}
