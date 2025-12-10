#include <stdio.h>

int main() {
    // Method 1: Manual char init
    char manual[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    // Method 2: String literal
    char automatic[] = "Hello";

    printf("Manual: %s\n", manual);
    printf("Automatic: %s\n", automatic);

    // Without null char
    char broken[] = { 'H', 'e', 'l', 'l', 'o' }; // No \0
    printf("Without null: ");
    for (int i = 0; i < 5; i++) {
        putchar(broken[i]);
    }
    printf("\n");

    return 0;
}
