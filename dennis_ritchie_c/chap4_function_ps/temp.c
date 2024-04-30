#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void convert(char *s) {
    int i = 0;
    while (s[i]) {
        if (!(isdigit(s[i]) || s[i] == '.' || s[i] == 'e' || s[i] == 'E' || s[i] == '+' || s[i] == '-')) {
            s[i] = '\0';
        }
        i++;
    }
}

float myatof(char *s) {
    float f = 0, t = 0;
    int pow = 1;
    int i = 0;
    int sign = 1;
    convert(s);

    // Handling the sign
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    while (s[i] && s[i] != 'e' && s[i] != 'E') {
        if (s[i] == '.') {
            i++;
            while (s[i] && isdigit(s[i])) {
                t = t * 10 + (s[i] - '0');
                pow = pow * 10;
                i++;
            }
        } else {
            f = f * 10 + (s[i] - '0');
            i++;
        }
    }

    // Handling the exponent part
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
        int expSign = 1;
        if (s[i] == '+' || s[i] == '-') {
            if (s[i] == '-') {
                expSign = -1;
            }
            i++;
        }
        int exponent = 0;
        while (s[i] && isdigit(s[i])) {
            exponent = exponent * 10 + (s[i] - '0');
            i++;
        }
        while (exponent > 0) {
            if (expSign == 1) {
                t /= 10;
            } else {
                f *= 10;
            }
            exponent--;
        }
    }

    if (s[0] == '\0') {
        return 0;
    } else {
        return sign * (f + (t / pow));
    }
}

int main() {
    char s[100];
    float f;
    printf("Enter a number: ");
    scanf("%99[^\n]", s);  // Limiting input to 99 characters to avoid buffer overflow
    f = myatof(s);
    printf("%f\n", f);
    return 0;
}

