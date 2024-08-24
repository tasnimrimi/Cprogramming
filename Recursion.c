#include <stdio.h>
#include <cs50.h>

void draw(int n);
int main(void){
    int height = get_int("Height: ");
    draw(height);
}
void draw(int n){
    // if nothing to draw
    if (n<=0){
        return;
    }
    // draw one horizontal pyramid (n-1)
    draw(n-1);
    // draw one more row
    for (int i = 0; i < n ; i++) {
        printf("#");
    }
    printf("\n");
        }


