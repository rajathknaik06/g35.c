/*John wants to write a program that takes two integers as input and prints the larger of the two numbers. If the numbers are equal, it should print either one of them.

Input format :
The input consists of a single line containing two space-separated integers n1 and n2.

Output format :
The output prints a single integer, which is the larger of the two given integers.*/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b) {
        printf("%d", b);
    } else {
        printf("%d", a);
    }
    return 0;
}
