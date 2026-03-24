// Logical operator in c language

#include<stdio.h>

int main(){
    int a = 5, b =3;
    
    if(a > b && b < 5)
    printf("AND is true\n");

    if (a > 5 || b > 10)
    printf("OR is true\n");

    if (!(a <5))
    printf("NOT is true\n");

    return 0;
}