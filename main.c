#include <cs50.h>
#include <stdio.h>


// 1. BOOLEAN
void baalsal() {
    char c = get_char("Do you agree? ");
    if (c =='y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c =='n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

/* 2. DEFINE FUNCTIONS */
void meow(int n);
int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}