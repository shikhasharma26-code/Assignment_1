#include <stdio.h>
#include "arraylib.h"

int main(void) {
    int n, value;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input!\n");
            return 1;
        }
    }

    printf("\nOriginal array: ");
    displayArray(a, n);

    printf("Max at index %d\n", findMaxIndex(a, n));
    printf("Min at index %d\n", findMinIndex(a, n));
    printf("Average = %.2f\n", findAverage(a, n));

    reverseArray(a, n);
    printf("Reversed array: ");
    displayArray(a, n);

    sortArray(a, n);
    printf("Sorted array: ");
    displayArray(a, n);

    printf("\nEnter a value to search: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    int pos = linearSearch(a, n, value);
    if (pos != -1)
        printf("%d found at index %d\n", value, pos);
    else
        printf("%d not found in array\n", value);

    // 👇 Prevent terminal from closing immediately (Windows only)
    printf("\nPress Enter to exit...");
    getchar();  // consume leftover newline
    getchar();  // wait for user to press Enter

    return 0;
}