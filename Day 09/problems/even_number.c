// This program print the even numbers from 1 to 100

#include <stdio.h>

int main(){
    int i;

    printf("followings are the even number of 1 to 100:\n");
    for(i=1; i<=100; i++){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
    return 0;

}

// while loop version

int main(){
    int i = 1;

    printf("followings are the even number of 1 to 100:\n");
    while (i<=100)
    {
        if(i%2==0){
            printf("%d \n",i);
        }
        i++;
    }
    return 0;

}


// do while loop version

int main(){
    int i = 1;

    printf("followings are the even number of 1 to 100:\n");
    do
    {
        if(i%2==0){
            printf("%d \n",i);
        }
        i++;
    } while (i<=100);
    
    return 0;

}