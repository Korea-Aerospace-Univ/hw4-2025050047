#include <stdio.h>

int main() {
    int answer = 0, input = 0, try = 0;
    scanf("%d", &answer);
    do {
        try++;
        
        scanf("%d", &input);
        if (answer > input) {
            printf("%d<?\n", input);
        }
        else if (answer < input) {
            printf("%d>?\n", input);
        }
        else {
            printf("%d==?\n%d", input, try);
        }
    } while (answer != input);
}
