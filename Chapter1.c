//1ST DRAFT

/*
#include <stdio.h>
int main(){
    printf("\\c Hello ");
    printf(" world");
    printf("\c");
}
*/
// 2ND DRAFT (Fahrenheit to Celcius)


#include <stdio.h>
 float main(){
    float fahr, celcius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    printf("FAHR   -  CELCIUS \n");
    fahr = lower;
    while (fahr<=upper){
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f \n", fahr, celcius);
        fahr = fahr + step;
    }
}


// 3RD DRAFT - (CELCIUS TO FARENHEIT)

/*
#include <stdio.h>
float main(){
    float celcius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    printf("Celcius -  Fahr \n");

    celcius = lower;
    while(celcius <=upper){
        fahr = (9.0/5.0 * celcius) + 32;
        printf("%3.0f \t %6.1f \n", celcius, fahr);
        celcius = celcius + step;
    }
}
*/

// 4TH DRAFT (FOR LOOP)
/*
#include <stdio.h>
int main(){
    int fahr;
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d \t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
*/

// 5th DRAFT (SYMBOL,getchar,putchar)

/*
#include <stdio.h>
 int main(){
     char c;
     printf("Enter a character: ");
     c = getchar(); // store single character
     printf("You entered character: %c\n", c);
 }
*/

/* #include <stdio.h>
int main (){
    char c = 'A';
    putchar(c); //print single character
    putchar('\n');
}
*/

// 6th DRAFT (File Copying)
/* #include <stdio.h>
int main (){
    char c;
    while ((c = getchar())!= EOF) // use ctrl + D to stop the program
        putchar(c);               // it prints any value user types
}
 */