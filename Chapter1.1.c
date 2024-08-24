// COUNT_CHARACTERS:

/*#include <stdio.h>
int main(){
    long nc;
    nc = 0;
    while (getchar()!= EOF){
        ++nc;
        printf("%ld\n", nc);
    }
}*/
//2nd version:
/*
#include <stdio.h>
int main(){
    double nc;
    for(nc = 0; getchar() != EOF ; ++nc);
    printf("%0.f\n", nc);
}
*/
