#include<stdio.h>

int main(){
    char arr[9];
    printf("Enter a five character string: ");
    scanf("%8s", &arr);

    printf("%c %c %c %c %c %d %d %d", arr[7],arr[6],arr[5], arr[4],arr[3],arr[2],arr[1],arr[0]);
    
    return 0;
}