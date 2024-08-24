#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ----------------------------this code should print number 10 ten times?----------------------------------------------
/*void f(void);
int main (void)
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
    j++;
}*/

// -----------------------------Can global varibale placed anywhere in the program?-----------------------------------
//Answer: No, only be placed before its first use or with extern declaration.
/* void func1(void);
void func2(void);
//int count; //declared before first use
int main(void){
   extern int count; // extern - tells count is defined somewhere outside this same file.
    func1();
    return 0;
}
int count = 100; //(declare before first use,will show error otherwise)
void func1(void){
    int temp;
    temp = count;
    func2();
    printf("\ncount is %d", count);
}

void func2(void){
    int count; //this hides the global variable (count) and prints itself first
    for (count = 1; count < 10 ; count++) {
        putchar(';');
    }
}*/

// -----------------------------------STATIC LOCAL VARIABLE? PROBLEM!!!----------------------------------------------

    /* int main(void) {
        static int series_num = 100;
        series_num = series_num + 23;
        return series_num;
    } */
// -------------------------------------HEX,OCTAL CONSTANTS:--------------------------------------------
// int hex = 0080; you must use 0x before 80 to say its hex not oct.
/* int hex = 0x80;
int oct = 012; //oct can start with 0.
int hex_to_dec;
int main(void){
    hex_to_dec = (1*16^3)+(2*16^2)+(8 *16) + (0 * 16^0);
    printf("%d", hex_to_dec);
} */
// ------------------------------------LOGICAL XOR OPERATION:------------------------------------------
/* int xor(int a, int b);
int main(void){
    printf("%d", xor(1, 0));
    printf("%d", xor(1, 1));
    printf("%d", xor(0, 1));
    printf("%d", xor(0, 0));
    return 0;
}
int xor(int a, int b){
    return (a || b) && !(a && b);
}
*/

// --------------------------------LEFT AND RIGHT SHIFTS:--------------------------------------
/* int main(void){
    unsigned int i;
    int j;
    i = 100;
    //left shifts:
    for (int j = 0; j < 4 ; ++j) {
        i = i <<1;
        printf("Left shift %d: %d\n", j, i);
    }
    //right shifts:
    for (int j = 0; j < 4; ++j) {
        i = i >> 1;
        printf("Right shift %d: %d\n", j, i);

    }
    return 0;
} */
// --------------------------------ARRAY INDEXING:------------------------
/* char s[80];
int main(void){
    s[8] = 'x'; //assigns it a value
    printf("%c", s[8]);
    return 0;
}
*/
// ----------------------------------CASTS:----------------------------------
/* int main(void){
    int i;
    for (int i = 0; i <= 100 ; ++i) {
        printf("%d / 2 is %.2f\n",i, (float) i / 2 );
    }
    return 0;
}
*/
// ----------------------------MAGIC NO. GENERATOR----------------------------
/*
int main(void){
    int magic;
    int guess;
    int i;

    magic = 25 ; //you can use rand()
    printf("Guess the magic number: ");
    scanf("%d", &guess);
    if (guess == magic){
        printf("***HURRAY, YOU WON***");
        printf("\n~NEVER GIVES UP~");
    }
    else {
    while (guess != magic){
        printf("Keep trying buddy: ");
        scanf("%d", &guess);
        if (guess == magic){
            printf("***HURRAY, YOU WON*** ~NEVER GIVES UP ");
        }
    }}
}
*/
//--------------------THE CONDITIONAL EXPRESSION---------problem :(--------------------
/* int main(void){
    float a, b;
    printf("Enter two number: ");
    scanf("%d%d",&a, &b);

    a<0||a>0||b<0||b>0? printf("%.2f\n", a/b): printf("Cant divide by weird thing you typed");
    //how can I divide negative numbers?
}
*/
//----------------Iteration Statement---------------------
/*int main(void){
    int x;
    for(x = 0; x <= 100; x++){
        printf("%d\n", x);
    }
} */
//--------------Infinite Loop-------------------------
/* int main(void){
    for (;;) {
        printf("This loop will run forever");
        break;
    }
}*/
/* int main(void){
    char ch;
    for (;;) {
        ch = getchar();
        if (ch == 'A') // GOES ON, until you type an A//
            break;
    }
    printf("You typed an A");
}*/
//---------------------BREAK STATEMENT-----------------------------
/* int main(void){
    int t;
    for (int t = 0; t < 100; ++t) {
        printf("%d\n", t);
        if(t==10)
            break;
    }
    return 0;
}
*/
//----------------CONTINUE STATEMENT-------------------------
// write a code to count spaces!! problem.
/* void done(void){
    char done, ch;
    done = 0;
    while(!done){
        ch = getchar();
        if (ch == '$')
        {done = 1;
        continue;}

    putchar(ch+1);
    }
}
*/
//---------------SPACE COUNTING----------------------------------




