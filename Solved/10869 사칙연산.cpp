//* https://www.acmicpc.net/problem/10869
//* Bronze 5

#include <stdio.h>

int main()
{
    int inputA, inputB;
    scanf("%d %d", &inputA, &inputB);
    printf("%d\n", inputA + inputB);
    printf("%d\n", inputA - inputB);
    printf("%d\n", inputA * inputB);
    printf("%d\n", inputA / inputB);
    printf("%d", inputA % inputB);
    return 0;
}