// To give grade on student based on marks
//      A+ -> 90 & above,
//      A  -> 80 & above,
//      B  -> 70 & above,
//      c  -> 60 & above
//      D  -> otherwise.

#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks Between 0 - 100 : ");
    scanf("%d", &marks);
    if (marks >= 90) {
        printf("A+\n");
    } else if (marks >= 80) {
        printf("A\n");
    } else if (marks >= 70) {
        printf("B\n");
    } else if (marks >= 60) {
        printf("C\n");
    } else {
        printf("D\n");
    }
    
    
    return 0;
}