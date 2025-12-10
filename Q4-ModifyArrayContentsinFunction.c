/*
 * Program Description:
 * This program multiplies each element of a 5-element array by 2 inside a function.
 * The changes are reflected in main() due to array referencing.
 */

 #include <stdio.h>

 // Function prototype
 void doubleValues(int arr[], int size);
 
 int main() {
     int values[5];
 
     printf("Enter 5 numbers:\n");
     for (int i = 0; i < 5; i++) {
         scanf("%d", &values[i]);
     }
 
     doubleValues(values, 5);
 
     printf("Values after doubling:\n");
     for (int i = 0; i < 5; i++) {
         printf("%d ", values[i]);
     }
     printf("\n");
 
     return 0;
 }
 
 void doubleValues(int arr[], int size) {
     for (int i = 0; i < size; i++) {
         arr[i] *= 2;
     }
 }
 