// To check if a triangle is equilateral, isosceles, scalene.
// If all three side are equal -> equilateral
// If any two sides are equal -> isosceles
// else -> Scalene

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the length of the Triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c) {
        printf("Equilateral\n");
    } else if (a==b || b==c || c==a) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    return 0;
}