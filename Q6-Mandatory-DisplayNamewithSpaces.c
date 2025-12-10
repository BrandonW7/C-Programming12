/*
 * Program Description:
 * This program reads a name and displays each character separated by a space.
 */

 #include <stdio.h>
 #include <string.h>
 
 int main() {
     char name[50];
 
     printf("Enter your name: ");
     fgets(name, sizeof(name), stdin);
 
     // Remove newline if present
     name[strcspn(name, "\n")] = '\0';
 
     // Print each character with space
     for (int i = 0; name[i] != '\0'; i++) {
         printf("%c ", name[i]);
     }
 
     printf("\n");
     return 0;
 }
 