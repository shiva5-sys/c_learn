// To check if the given year is leap year.

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if ( (year%4==0 && year%100!=0) || year%400==0) {
        printf("It is a leap year\n");
    } else {
        printf("It is not a leap year\n");
    }
    
}