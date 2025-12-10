/*
 * Program Description:
 * This program finds the highest value in a 5-element array using a function.
 */

 #include <stdio.h>

 // Function prototype
 int findHighest(int arr[], int size);
 
 int main() {
     int numbers[5];
 
     printf("Enter 5 numbers:\n");
     for (int i = 0; i < 5; i++) {
         scanf("%d", &numbers[i]);
     }
 
     int highest = findHighest(numbers, 5);
     printf("Highest number = %d\n", highest);
 
     return 0;
 }
 
 int findHighest(int arr[], int size) {
     int max = arr[0];
     for (int i = 1; i < size; i++) {
         if (arr[i] > max) max = arr[i];
     }
     return max;
 }
 