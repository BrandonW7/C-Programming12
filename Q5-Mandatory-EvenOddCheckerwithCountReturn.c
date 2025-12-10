/*
 * Program Description:
 * This program checks if 5 input values are even or odd using a function.
 * It also returns the count of even numbers to main().
 */

 #include <stdio.h>

 // Function prototype
 int checkEvenOdd(int arr[], int size);
 
 int main() {
     int numbers[5];
 
     printf("Enter 5 integers:\n");
     for (int i = 0; i < 5; i++) {
         scanf("%d", &numbers[i]);
     }
 
     int evenCount = checkEvenOdd(numbers, 5);
     printf("Total even numbers: %d\n", evenCount);
 
     return 0;
 }
 
 int checkEvenOdd(int arr[], int size) {
     int count = 0;
 
     for (int i = 0; i < size; i++) {
         if (arr[i] % 2 == 0) {
             printf("%d is even\n", arr[i]);
             count++;
         } else {
             printf("%d is odd\n", arr[i]);
         }
     }
 
     return count;
 }
 