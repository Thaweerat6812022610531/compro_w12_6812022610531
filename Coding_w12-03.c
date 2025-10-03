#include <stdio.h>            // Include standard header

void doubleArray(int *arr, int size) {        // Function to mutiply each member in the array by 2
    for (int i = 0; i < size; i++) {         // Loop through each member of the array
        arr[i] *= 2;                        // Multiply each member by 2
    }
}


int main() {                                 // Main function
    int a[] = {1, 2, 3, 4, 5};             // Declare and initialize an integer array
    int size = 5;                           // Size of the array

    printf("Before: ");                  // Print the array before calling doubleArray() function
    for (int i = 0; i < size; i++) {        // Loop through each member of the array
        printf("%d ", a[i]);               // Print each member of the array
    } 

    doubleArray(a, size);              // Call doubleArray() function with array and its size

    printf("\nAfter: ");                          // Print the array after calling doubleArray() function
    for (int i = 0; i < size; i++) {                // Loop through each member of the array
        printf("%d ", a[i]);                    // Print each member of the array
    }

    return 0;                                // Return 0 to indicate successful execution
}

//inline 3 we declare doubleArray() function which takes an integer pointer and an integer size as parameters.
//inline 4-6 we use a for loop to to multiply each member of the array by 2. it will do this until i is less than the size of the array.
//inline 11 we declare and initialize an integer array a with values {1, 2, 3, 4, 5}.
//inline 12 we declare an integer variable size and initialize it with the size of the array (5).
//inline 14-16 we print the member of the array before calling doubleArray() function.
//inline 19 we call the doubleArray() function and pass the array a and its size in parameters.
//inline 21-23 we print the member of the array after calling doubleArray() function.