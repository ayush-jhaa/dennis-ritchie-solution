#include <stdio.h>

int strindex(char s[], char t[]);

int main() {
    char s[50] ;
    printf("enter main string..\n");
    scanf("%s",s);

    char t[50] ;
    printf("enter substring..\n");
    scanf("%s",t);
    
    int position = strindex(s, t);
    if (position != -1)
        printf("Rightmost occurrence of '%s' in '%s' is at position %d\n", t, s, position);
    else
        printf("'%s' not found in '%s'\n", t, s);
    return 0;
}

int strindex(char s[], char t[]) {
    int i, j, k;
    int rightmost = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (t[k] == '\0') // entire substring matched
            rightmost = i;
    }
    return rightmost;
}

