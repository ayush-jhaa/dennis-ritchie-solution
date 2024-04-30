#include <stdio.h>

int main() {
    int n=0; // variable n to hold tab spacing
    printf("Enter the number of spaces between tab stops: ");
    scanf("%d", &n); // get tab spacing from user

    // Read input and replace tabs with spaces
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') { // if tab is encountered
            for (int i = 0; i < n; i++) {
                putchar(' '); // replace tab with n spaces
            }
        } else {
            putchar(c); // if not a tab, simply output character
        }
    }
    return 0;
}

