// Using putchar() to print characters in C
// putchar transforms the integer argument to an unsigned char and writes that character to stdout

#include <stdio.h>

int main(){
    char a,b,c;
    printf("Enter charcter values\n");
    scanf(" %c %c %C ", &a, &b, &c);

    if (a == b && b == c)
    {
        putchar(a);
        putchar(b);
        putchar(c);
    }
    else
    {
        printf("Characters are not the same.\n");
    }
    
}