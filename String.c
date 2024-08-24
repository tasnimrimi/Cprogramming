#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    string s = "HI!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // string is an array of characters and end it in 0
    string g = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(g); i < n; i++) {
        printf("%c", toupper(g[i])); //This line prints each character of the input
                                                // string g in uppercase, one by one.


    }
}