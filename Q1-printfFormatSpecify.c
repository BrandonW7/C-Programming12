#include <stdio.h>

int main() {
    printf("(a) [%5s]\n", "abcd");     // right-align, total width 5
    printf("(b) [%5s]\n", "abcdef");   // string longer than width, prints full
    printf("(c) [%-5s]\n", "abc");     // left-align, pad right
    printf("(d) [%5.2s]\n", "abcde");  // print max 2 chars, right-align in width 5
    printf("(e) [%-5.2s]\n", "abcde"); // print 2 chars, left-align in width 5
    return 0;
}
