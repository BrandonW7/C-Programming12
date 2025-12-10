#include <stdio.h>
#include <string.h>

int main() {
    char name[] = { 'R', 'o', 'b', 'e', 'r', 't' }; // no null-terminator

    // (a) puts(name);      // ❌ may print garbage after 't'
    // (b) scanf("%s", &name); // ❌ no room for more input + missing '\0'
    // (c) strcpy(name, "Philip"); // ❌ potential overflow
    // (d) *(name + 5) = 'a'; // ✅ valid but risky overwrite
    // (e) name = "Philip"; // ❌ invalid, array name is not assignable

    for (int i = 0; i < 6; i++) {
        putchar(name[i]);
    }
    putchar('\n');

    return 0;
}
