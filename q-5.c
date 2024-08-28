
#include<stdio.h>

int main(){

    int n,sum;
    int i = 0;
    int f_digit,l_digits;

    printf("Enter the number : ");
    scanf("%d", &n);

    l_digits = n%10;

    while(n>=10){
        n=n/10;
    }
    f_digit = n;
    sum = f_digit + l_digits;
    printf("Sum of first and last digits: %d\n", sum);
}