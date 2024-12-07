// If the given character is uppercase or lowercase

#include <stdio.h>

int main() {
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    if (a=='a' || a=='b' || a=='c' || a=='d' || a=='e' || a=='f' || a=='g' || a=='h' || a=='i' || a=='j' || 
    a=='k' || a=='l' || a=='m' || a=='n' || a=='o' || a=='p' || a=='q' || a=='r' || a=='s' || a=='t' || a=='u' || 
    a=='v' || a=='w' || a=='x' || a=='y' || a=='z' ) {
        printf("LowerCase\n");
    } else {
        printf("UpperCase\n");
    }
    return 0;
}