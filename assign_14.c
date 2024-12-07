// Categorize into age group
//     less than 13 -> Child
//     less than 20 -> Teenage
//     less than 60 -> Adult

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age>0) {
        if(age<13) {
            printf("Child\n");
        } else if(age<20 && age>=13) {
            printf("Teenage\n");
        } else if(age>=20 && age<60) {
            printf("Adult\n");
        } else {
            printf("Old\n");
        }
    } else {
        printf("Enter valid age and Try again...\n");
    }
    return 0;
}