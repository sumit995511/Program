#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial value of x: %d\n", x);

    printf("Value after pre-increment (++x): %d\n", ++x);
    printf("Value of x after pre-increment: %d\n", x);

    printf("Value during post-increment (x++): %d\n", x++);
    printf("Value of x after post-increment: %d\n", x);

    return 0;
}