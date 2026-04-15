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
            //만약 직전까지 숫자를 세고 있었다면
            if (numericCountTemp > 0) { 
                if (numericCountTemp >= numericCountMax) numericCountMax = numericCountTemp; //최댓값 업데이트
                numericCountTemp = 0;
            }
        }
        else if ('0' <= a && a <= '9') {
            numericCountTemp++;
            //만약 직전까지 로마자를 세고 있었다면
            if (lowerCaseCountTemp > 0) { 
                if (lowerCaseCountTemp >= lowerCaseCountMax) lowerCaseCountMax = lowerCaseCountTemp; //최댓값 업데이트
                lowerCaseCountTemp = 0;
            }
        }
        else {
            lowerCaseCountTemp = 0;
            numericCountTemp = 0;
        }
    }
    printf("%d\n%d", lowerCaseCountMax, numericCountMax);
}
