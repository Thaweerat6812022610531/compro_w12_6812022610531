#include <stdio.h>              // Include standard header

void swap(int *a, int *b) {           // Function to swap two integers
    int temp = *a;                   // Store the value at address a in temp
    *a = *b;                         // Assign the value at address b to the value at address a
    *b = temp;                        // Assign the value in temp to the value at address b
}

int main() {
    int a = 5, b = 10;                                       // Declare and initialize two integer variables

    printf("Before swap: a = %d, b = %d\n", a, b);            // Print values before swapping
    swap(&a, &b);                                             // Call swap function with addresses of a and b
    printf("After swap: a = %d, b = %d\n", a, b);             // Print values after swapping

return 0;                                   // Return 0 to indicate successful execution
}

//inline 3 we declare swap() function which takes two integer pointers as parameters.
//inline we declare a temporary variable temp to hold the value of *a.
//inline 5 we declare *a = *b to assign new value to *a.
//in line 6 we declare *b = temp to assign new value to *b.

//inline 9 we declare two integer variables a and b and initialize them with values 5 and 10 
//inline 12 we print the values of a and b before swapping.
//inline 13 we call the swap function and pass the addresses of a and b using the & operator.
//inline 14 we print the values of a and b after swapping.