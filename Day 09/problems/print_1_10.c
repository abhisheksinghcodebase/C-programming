// this program prints the numbers from 1 to 10 and their multiples of a given number

#include <stdio.h>

int main(){
    int i,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (i=1; i<=10; i++){
        printf("%d * %d = %d\n",i,n,i*n);
    }
    return 0;
}

// while loop version

int main(){
    int i=1,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=10)
    {
        printf("%d * %d = %d\n",i,n,i*n);
        i++;
    }
    
    return 0;
}

// do while loop version

int main(){
    int i=1,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    do
    {
        printf("%d * %d = %d\n",i,n,i*n);
        i++;
    } while (i<=10);
    
    return 0;
}