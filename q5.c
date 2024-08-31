
#include<stdio.h>

void main(){
 
    char vowel =('a','e','i','o','u');

    printf("Enter any alphabet character: ");
    scanf("%c",&vowel);

    switch(vowel){

        case 1:
            printf("The entered character is a vowel.");
            break;
        default:
            printf("The entered character is not a vowel.");
            break;
    }
}


