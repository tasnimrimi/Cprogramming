#include <stdio.h>

int main() {
    // Step 1: read input from stdin
    char c;
    int frequencies[11];
    int wordLength = 0;
    int classInterval = 2;
    while((c = (char) getchar()) != '\n') {
        // Step 2: Detect word, find its length and update the frequency
        if (c != ' ') {
            wordLength++;
        } else {
            int class = wordLength / classInterval;
            frequencies[class]++;
            wordLength = 0;
        }
    }
    for(int i = 0; i < 11; i++) {
        printf("%d - %d: %d\n", i * classInterval, i * classInterval + classInterval - 1, frequencies[i]);
    }


}