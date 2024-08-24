//ARRAY:
#include <stdio.h>


int main() {
    int c, i, nwhite, nother;
    int ndigits[26];

    nwhite = nother = 0;
    for (i = 0; i < 26; ++i) {
        ndigits[i] = 0;
    }

    while (((c = getchar()) != '\n')) {
        printf("c: %d \n", c);
        if (c >= 'a' && c <= 'z') {
            ++ndigits[c - 'a'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("letters = ");
    for (i = 0; i < 26; ++i) {
        printf("%d ", ndigits[i]);
    }
    printf("whitespace = %d, other = %d\n", nwhite, nother);

}
