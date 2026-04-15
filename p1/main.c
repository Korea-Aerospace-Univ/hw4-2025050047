#include <stdio.h>

int main(void) {
    int answer = 0, input = 0, try1 = 0;
    scanf("%d", &answer);
    do {
        try1++;
        
        scanf("%d", &input);
        
        if (answer > input) printf("%d<?\n", input);
        else if (answer < input) printf("%d>?\n", input);
        else printf("%d==?\n%d", input, try1);
        
    } while (answer != input);

    return 0;
}
