#include <cs50.h>
#include <stdio.h>

void f(void);
int main (void)
/*{
    int n = 50;
    printf("%i\n",n);
}*/
{
    int i;
    for (int i = 0; i < 10 ; i++) {
        f();
        return 0;
    }
}
void f(void){
    int j = 10;
    printf("%d", j);

}