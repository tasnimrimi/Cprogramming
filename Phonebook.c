#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string names[] = {"Nishtha", "Sagor", "Rumman", "Tasnim"};
    string numbers[] = {"0192", "01523", "52464", "45786"};

    string name = get_string("NAME: ");
    for (int i = 0; i < 4 ; i++) {
        if (strcmp(names[i], name) == 0) {
            printf("FOUND: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("NOT FOUND\n");
    return 1;
}
