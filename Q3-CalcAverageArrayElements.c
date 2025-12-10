/*
 * Program Description:
 * This program calculates the average of 5 numbers stored in an array.
 */

 #include <stdio.h>

 // Function prototype
 float findAverage(int arr[], int size);
 
 int main() {
     int values[5];
 
     printf("Enter 5 numbers:\n");
     for (int i = 0; i < 5; i++) {
         scanf("%d", &values[i]);
     }
 
     float avg = findAverage(values, 5);
     printf("Average = %.2f\n", avg);
 
     return 0;
 }
 
 float findAverage(int arr[], int size) {
     int total = 0;
     for (int i = 0; i < size; i++) {
         total += arr[i];
     }
     return total / (float)size;
 }
 