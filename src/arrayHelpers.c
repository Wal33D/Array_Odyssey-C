#include "arrayHelpers.h"
#include <stdio.h>

void modifyArrayElements(int *array, int size) {
    char decision;
    int value, index;

    printf("\nWould you like to modify any array elements? (Y/n): ");
    decision = getchar();
    // Clear the input buffer
    while (getchar() != '\n');

    while (decision == 'Y' || decision == 'y') {
        printf("Enter the index of the element you wish to modify (0-9): ");
        scanf("%d", &index);
        // Clear the input buffer
        while (getchar() != '\n');

        if (index >= 0 && index < size) {
            printf("Enter the new value for element #%d: ", index);
            scanf("%d", &value);
            // Clear the input buffer
            while (getchar() != '\n');
            array[index] = value;
            printf("Element #%d now has the value %d.\n", index, value);
        } else {
            printf("Invalid index. Please choose between 0 and 9.\n");
        }

        printf("\nWould you like to modify another element? (Y/n): ");
        decision = getchar();
        // Clear the input buffer
        while (getchar() != '\n');
    }
}

void displayArrayElementsAndAddresses(int *array, int size) {
    printf("\nJourney begins: Observing the elements and their abodes\n");
    for (int i = 0; i < size; i++) {
        printf("\nElement #%d Value: %d\n", i, *(array + i));
        printf("Address in Decimal: %lu\n", (unsigned long)(array + i));
        printf("Address in Hexadecimal: %p\n", (void *)(array + i));
    }
}
