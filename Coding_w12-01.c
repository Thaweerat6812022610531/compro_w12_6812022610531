#include<stdio.h>      // Include standard header

int main() {           // Main function
int x = 10;           // Declare and initialize an integer variable x
int *ptr;            // Declare a pointer variable ptr

ptr = &x;                           // Assign the address of x to ptr
printf("Before: x = %d\n", x);    // Print the value of x before modification
*ptr = 20;                              // Modify the value of x through the pointer and assign 20 to it
printf("After: x = %d\n", x);            // Print the value of x after modification

return 0;                    // Return 0 to indicate successful execution
}

//In line 4 we declare an integer variable x and initialize it to 10.
//In line 5 we declare a pointer variable ptr 
//In line 7 we assign the address of x to ptr 
//In line 8 we print the value of x before modification.
//In line 9 we declare a pointer variable *ptr to modify the value of x through the pointer.
//In line 10 we print the value of x before modification.