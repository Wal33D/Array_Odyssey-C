//
//Creates an array of 10 integers and assign to each element a different arbitrary value. Display all the
//elements and their addresses (in decimal and hexadecimal) in memory using the & operator. Declare a
//pointer to the array. Display all the elements and their addresses using this pointer and pointer arithmetic.
//
// Your main program file

#include <stdio.h>
#include "arrayHelpers.h" // Include the new header for array helper functions

int main() {
    int myArray[10] = {0, 9, 2, 8, 3, 7, 4, 6, 5, 1};
    int arraySize = sizeof(myArray) / sizeof(int);

    printf("\n------- Welcome -------\n");
    printf("This is the tale of an array and its journey through memory!\n");

    // Display array elements and addresses
    displayArrayElementsAndAddresses(myArray, arraySize);

    // Let the user modify an element
    modifyArrayElements(myArray, arraySize);

    // Display array elements and addresses again to show the changes
    printf("\nAfter a slight alteration in the tale...\n");
    displayArrayElementsAndAddresses(myArray, arraySize);

    printf("\n-------- Good Bye ----------\n");

    return 0;
}
