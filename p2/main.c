#include <stdio.h>

int main() {
    int n = 0;
    int lowerCaseCountMax = 0, numericCountMax = 0;
    int lowerCaseCountTemp = 0, numericCountTemp = 0;

    scanf("%d\n", &n); //scanf에 라인 피드를 넣어 줄바꿈 문제 해결

    int i;
    char a;
    for (i = 0; i < n; i++) {
        scanf("%c", &a);

        if ('a' <= a && a <= 'z') {
            lowerCaseCountTemp++;
            numericCountTemp = 0;
        }
        else if ('0' <= a && a <= '9') {
            numericCountTemp++;
            lowerCaseCountTemp = 0;
        }
        else {
            lowerCaseCountTemp = 0;
            numericCountTemp = 0;
        }
        if (numericCountTemp >= numericCountMax) numericCountMax = numericCountTemp;
        if (lowerCaseCountTemp >= lowerCaseCountMax) lowerCaseCountMax = lowerCaseCountTemp;
    }
    printf("%d\n%d", lowerCaseCountMax, numericCountMax);
}
