#include <stdio.h>
#include <string.h>

int main() {
    char *text = "some text";

    printf("(a) %s\n", text);
    printf("(b) %c\n", *text);
    printf("(c) %c\n", *"more text");
    printf("(d) %c\n", *(text + 1));
    printf("(e) %s\n", text + 1);
    printf("(f) %s\n", text);

    *(text + 4) = '\0'; // ❌ this will cause a crash because string literals are read-only
    // Safe simulation:
    char modifiable[] = "some text";
    modifiable[4] = '\0';
    printf("(g) %s\n", modifiable);

    printf("(h) %c\n", "text"[2]);
    printf("(i) %s\n", "text" + 2);

    return 0;
}
