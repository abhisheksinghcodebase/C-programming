// Reading character in C programming 

#include <stdio.h>

int main(){
    // character value reading
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch); // Reading a single character
    printf("You entered: %c\n", ch); // Displaying the entered character

    //using getchar() to read a character
    printf("Enter another character: ");
    getchar(); // To consume the newline character left by previous scanf
    ch = getchar(); // Reading another character using getchar()
    printf("You entered: %c\n", ch); // Displaying the entered character

    // string value reading
    
    char a[100];
    printf("Enter a value: ");
    scanf("%s", a);
    printf("Your entered valued is stored\n");
    printf("Do you want to see the Entered string value\n");
    printf("Enter 1 for Yes and 0 for No: ");
    int choice;
    scanf("%d", &choice);
    if(choice == 1){
    printf("%s is your character value\n", a);
    } else if(choice == 0){
        printf("You chose not to see the entered string value\n");
    }
    return 0;


}