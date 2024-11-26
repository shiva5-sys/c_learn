// To check the given character is a vowel or consonent.

#include <stdio.h>

int main() {
    char a;
    printf("Enter the character : ");
    scanf("%c", &a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='A' || a=='E' || a=='I' || a=='O' || a=='U') {
        printf("It is a vowel \n");
    } else {
        printf("It is a consonants \n");
    }
    return 0;
}