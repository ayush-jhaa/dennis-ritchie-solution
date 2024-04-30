#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strindex(char *s, char *t);

int main() {
    int pos;
    char s[50], t[50];

    printf("Enter s:\n");
    scanf("%[^\n]s", s);

    printf("Enter t:\n");
    scanf(" %[^\n]s", t); // corrected the format specifier

    pos = strindex(s, t);

    printf("%d\n", pos);

    return 0;
}

int strindex(char *s, char *t) {
    int pos = -1; // Initialize pos to -1 to indicate no occurrence found
    char *p = strstr(s, t);

    while (p != NULL) {
        pos = p - s; // Update pos with the new occurrence position
        p = strstr(p + 1, t); // Move p to the next occurrence
    }

    return pos;
}

