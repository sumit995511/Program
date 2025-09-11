#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;   // assume first number is largest

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    printf("Largest number is: %d\n", largest);

    return 0;
}
