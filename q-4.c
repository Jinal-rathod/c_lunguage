
#include<stdio.h>

int main(){

    float PI=3.14,r,formula;

    printf("Enter the r value : ");
    scanf("%f",&r);

    formula=(PI*r*r*r)*4/3;
    
    printf("PI*r*r*r*4/3 = %.2f",formula);

}