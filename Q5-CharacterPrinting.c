#include <stdio.h>
#include <string.h>

int main() {
    // (a)
    char *p = "abcd";
    while (*p) {
        putchar(*p++);
    }
    putchar('\n');

    // (b)
    char *text = "abcd";
    p = text + strlen(text) - 1;
    while (text <= p) {
        puts(p--);
    }

    return 0;
}
