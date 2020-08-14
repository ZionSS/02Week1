#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int N, scoreA = 0, scoreB = 0, scoreC = 0;
    scanf("%d", &N);
    char test[100];
    scanf("%s", test);
    for (int i = 0; i < N; i += 3)
    {
        if (test[i] == 'A')
            scoreA++;
        if (test[i + 1] == 'B')
            scoreA++;
        if (test[i + 2] == 'C')
            scoreA++;
    }
    for (int i = 0; i < N; i += 4)
    {
        if (test[i] == 'B')
            scoreB++;
        if (test[i + 1] == 'A')
            scoreB++;
        if (test[i + 2] == 'B')
            scoreB++;
        if (test[i + 3] == 'C')
            scoreB++;
    }
    for (int i = 0; i < N; i += 6)
    {
        if (test[i] == 'C')
            scoreC++;
        if (test[i + 1] == 'C')
            scoreC++;
        if (test[i + 2] == 'A')
            scoreC++;
        if (test[i + 3] == 'A')
            scoreC++;
        if (test[i + 4] == 'B')
            scoreC++;
        if (test[i + 5] == 'B')
            scoreC++;
    }
    if (scoreA > scoreB && scoreA > scoreC)
    {
        printf("%d\n", scoreA);
        printf("Adrian");
    }
    else if (scoreB > scoreA && scoreB > scoreC)
    {
        printf("%d\n", scoreB);
        printf("Bruno");
    }
    else if (scoreC > scoreB && scoreC > scoreA)
    {
        printf("%d\n", scoreC);
        printf("Goran");
    }
    else if (scoreA == scoreC && scoreA == scoreB)
    {
        printf("%d\n", scoreA);
        printf("Adrian\nBruno\nGoran");
    }
    else if (scoreA == scoreB)
    {
        printf("%d\n", scoreA);
        printf("Adrian\nBruno");
    }
    else if (scoreB == scoreC)
    {
        printf("%d\n", scoreB);
        printf("Bruno\nGoran");
    }
    else if (scoreA == scoreC)
    {
        printf("%d\n", scoreA);
        printf("Adrian\nGoran");
    }
}
