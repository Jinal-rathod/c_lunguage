
#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.", c);
            break;
        default:
            if(c>='a' && c<='z'){
                printf("%c is a an alphabet", c);
            }
            break;
    }
}



