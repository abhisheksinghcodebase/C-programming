// The else if statement in c programming
// the else if statement is used to make decisions in c programming
// the syntax of else if statement in c programming is as follows

#include<stdio.h>

int main(){
    int age = 18;

    if(age > 18 ){
        printf("You are eligible to vote");

    }else if(age == 18){
        printf("You are just eligible to vote");
    }else{
        printf("You are not eligible to vote");
    }
    return 0;
}