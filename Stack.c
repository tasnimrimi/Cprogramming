#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void push(int i); /*This is a function declaration for push.
                    It specifies that push is a function that
                    takes an integer i as an argument and
                    does not return a value (void).*/

int pop(void); /*This is a function declaration for pop.
                It specifies that pop is a function that takes no arguments and returns an integer.*/
int *tos, *p1, stack[SIZE];

int main(void){
    int value;

    tos = stack; /*This initializes tos to point to the beginning of the stack array.*/
    p1 = stack;  /*This initializes p1 to also point to thE beginning of the stack array.
                  p1 will be used to keep track of the current position in the stack.*/

    do{
        printf ("Enter value: ");
        scanf("%d", &value);

        if(value!= 0) push (value);
        else printf("Value on top is %d\n", pop());
    } while(value!= -1);
    return 0;
}
void push(int i){
    p1++;
    if (p1 ==(tos+SIZE)){
        printf("Stack Overflow.\n");
        exit(1);
    }
    *p1 = i;
}
int pop(void){
    if (p1 == tos){
        printf("Stack Underflow.\n");
        exit (1);
    }
    p1--;
    return *(p1+1);
}