// If the number is divisible by both 2 & 3

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num%2==0 && num%3==0) {
        printf("It is divisible by both 2 and 3.\n");
    } else {
        printf("It is not divisible by both 2 and 3.\n");
    }
}