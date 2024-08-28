#include <stdio.h>
#include <cs50.h>
int main(void){
    int x = 99;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;

    printf("Values of p1 and p2: %d %d\n", *p1, *p2);
    printf("Addresses pointed to by p1 and p2: %p %p", p1, p2);
    return 0;
}